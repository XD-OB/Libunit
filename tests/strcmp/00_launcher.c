/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 13:43:18 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:38:28 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strcmp_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("\033[33mSTRCMP:\n");
	load_test(&test, "\033[36mBasic test 01", &basic_test_01);
	load_test(&test, "\033[36mBasic test 02", &basic_test_02);
	load_test(&test, "\033[36mBasic test 03", &basic_test_03);
	load_test(&test, "\033[36mBasic test 04", &basic_test_04);
	load_test(&test, "\033[36mBasic test 05", &basic_test_05);
	load_test(&test, "\033[36mBasic test 06", &basic_test_06);
	load_test(&test, "\033[36mBasic test 07", &basic_test_07);
	load_test(&test, "\033[36mBasic test 08", &basic_test_08);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
