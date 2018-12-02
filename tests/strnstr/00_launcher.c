/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:47:03 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:47:04 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strnstr_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("\033[33mSTRNSTR:\n");
	load_test(&test, "\033[36mBasic test 1", &strnstr_basic1);
	load_test(&test, "\033[36mBasic test 2", &strnstr_basic2);
	load_test(&test, "\033[36mBasic test 3", &strnstr_basic3);
	load_test(&test, "\033[36mBasic test 4", &strnstr_basic4);
	load_test(&test, "\033[36mNULL  test 1", &strnstr_null);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
