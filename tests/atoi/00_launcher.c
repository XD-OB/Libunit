/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:01:50 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:32:39 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		atoi_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("\033[33mATOI:\n");
	load_test(&test, "\033[36mBasic test 01", &atoi_basic1);
	load_test(&test, "\033[36mBasic test 02", &atoi_basic2);
	load_test(&test, "\033[36mBasic test 03", &atoi_basic3);
	load_test(&test, "\033[36mBasic test 04", &atoi_basic4);
	load_test(&test, "\033[36mBasic test 05", &atoi_basic5);
	load_test(&test, "\033[36mBasic test 06", &atoi_basic6);
	load_test(&test, "\033[36mBasic test 07", &atoi_basic7);
	load_test(&test, "\033[36mBasic test 08", &atoi_basic8);
	load_test(&test, "\033[36mBasic test 09", &atoi_basic9);
	load_test(&test, "\033[36mBasic test 10", &atoi_basic10);
	load_test(&test, "\033[36mBasic test 11", &atoi_basic11);
	load_test(&test, "\033[36mBasic test 12", &atoi_basic12);
	load_test(&test, "\033[36mBasic test 13", &atoi_basic13);
	load_test(&test, "\033[36mBasic test 14", &atoi_basic14);
	load_test(&test, "\033[36mBasic test 15", &atoi_basic15);
	load_test(&test, "\033[36mBasic test 16", &atoi_basic16);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
