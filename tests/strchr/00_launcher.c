/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:36:04 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 20:09:26 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strchr_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_endl("\033[33mSTRCHR:\n");
	load_test(&test, "\033[36mBasic test 1", &strchr_basic1);
	load_test(&test, "\033[36mBasic test 2", &strchr_basic2);
	load_test(&test, "\033[36mBasic test 3", &strchr_basic3);
	load_test(&test, "\033[36mBasic test 4", &strchr_basic4);
	load_test(&test, "\033[36mNull  test 1", &strchr_null);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
