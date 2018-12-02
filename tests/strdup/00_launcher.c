/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:38:39 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:38:41 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strdup_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_endl("\033[33mSTRDUP:\n");
	load_test(&test, "\033[36mBasic test 1", &strdup_basic1);
	load_test(&test, "\033[36mBasic test 2", &strdup_basic2);
	load_test(&test, "\033[36mBasic test 3", &strdup_basic3);
	load_test(&test, "\033[36mBasic test 4", &strchr_basic4);
	load_test(&test, "\033[36mNULL  test 1", &strdup_null);
	load_test(&test, "\033[36mNULL  test 2", &strdup_hard);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
