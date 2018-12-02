/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:28:42 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:55:45 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static char		*get_result(int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			return ("\033[32mOK\033[0m");
	}
	else if (WTERMSIG(status) == SIGSEGV)
		return ("\033[31mSIGV\033[0m");
	else if (WTERMSIG(status) == SIGBUS)
		return ("\033[31mBUSE\033[0m");
	return ("\033[31mKO\033[0m");
}

static void		child(t_unit_test **test)
{
	int	return_value;

	return_value = (*test)->test_fct();
	exit(return_value);
}

static void		parent(char *name, int *success)
{
	int	status;

	status = 0;
	wait(&status);
	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
		*success += 1;
	t_putstr("\033[33m> \033[0m ");
	t_putstr(name);
	t_putstr("\033[36m :[");
	t_putstr(get_result(status));
	t_putstr("\033[36m]\n");
}

int				launch_tests(t_unit_test **list)
{
	int	success;
	int	counter;
	int	pid;

	success = 0;
	counter = 0;
	while (*list)
	{
		pid = fork();
		if (pid < 0)
			t_putstr("\033[31mfailed to launch test\033[0m\n");
		else if (pid == 0)
			child(list);
		else if (pid > 0)
			parent((*list)->name, &success);
		*list = (*list)->next;
		counter++;
	}
	t_putstr("\n\033[32msuccessfull test \033[0m");
	t_putnbr(success);
	t_putstr(" /\033[32m");
	t_putnbr(counter);
	t_putstr(" tests checked\033[0m\n\n");
	return ((counter == success) ? 0 : 1);
}
