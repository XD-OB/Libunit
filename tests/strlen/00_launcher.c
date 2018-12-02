/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:39:47 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:39:49 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strlen_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("\033[33mSTRLEN:\n");
	load_test(&test, "\033[36mBasic test 1", &strlen_basic1);
	load_test(&test, "\033[36mBasic test 2", &strlen_basic2);
	load_test(&test, "\033[36mBasic test 3", &strlen_basic3);
	load_test(&test, "\033[36mNull  test 1", &strlen_null);
	load_test(&test, "\033[36mBig   test 1", &strlen_big);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
