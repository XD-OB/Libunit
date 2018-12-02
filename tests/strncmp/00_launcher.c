/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:43:39 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:43:40 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strncmp_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("\033[33mSTRNCMP:\n");
	load_test(&test, "\033[36mBasic test 01", &strncmp_basic1);
	load_test(&test, "\033[36mBasic test 02", &strncmp_basic2);
	load_test(&test, "\033[36mBasic test 03", &strncmp_basic3);
	load_test(&test, "\033[36mBasic test 04", &strncmp_basic4);
	load_test(&test, "\033[36mHard  test 01", &strncmp_hard);
	load_test(&test, "\033[36mNULL  test 01", &strncmp_null1);
	load_test(&test, "\033[36mNULL  test 02", &strncmp_null2);
	load_test(&test, "\033[36mNULL  test 03", &strncmp_null3);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
