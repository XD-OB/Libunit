/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:50:23 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:50:25 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strstr_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("\033[33mSTRSTR:\n");
	load_test(&test, "\033[36mBasic test 1", &strstr_basic1);
	load_test(&test, "\033[36mBasic test 2", &strstr_basic2);
	load_test(&test, "\033[36mBasic test 3", &strstr_basic3);
	load_test(&test, "\033[36mNULL  test 1", &strstr_null1);
	load_test(&test, "\033[36mNULL  test 2", &strstr_null2);
	load_test(&test, "\033[36mNULL  test 3", &strstr_null3);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
