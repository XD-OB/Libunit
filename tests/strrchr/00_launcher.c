/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:48:25 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:48:27 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strrchr_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("\033[33mSTRRCHR:\n");
	load_test(&test, "\033[36mBasic test 1", &strrchr_basic1);
	load_test(&test, "\033[36mBasic test 2", &strrchr_basic2);
	load_test(&test, "\033[36mBasic test 3", &strrchr_basic3);
	load_test(&test, "\033[36mBasic test 4", &strrchr_basic4);
	load_test(&test, "\033[36mNULL  test 1", &strrchr_null);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
