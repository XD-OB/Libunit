/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:45:20 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:45:22 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strncpy_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("\033[33mSTRNCPY:\n");
	load_test(&test, "\033[36mBasic test 1", &strncpy_basic1);
	load_test(&test, "\033[36mBasic test 2", &strncpy_basic2);
	load_test(&test, "\033[36mBasic test 3", &strncpy_basic3);
	load_test(&test, "\033[36mBasic test 4", &strncpy_basic4);
	load_test(&test, "\033[36mNULL  test 1", &strncpy_null);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
