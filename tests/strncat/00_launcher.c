/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:40:56 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:40:59 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strncat_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("\033[33mSTRNCAT:\n");
	load_test(&test, "\033[36mBasic test 1", &strncat_basic1);
	load_test(&test, "\033[36mBasic test 2", &strncat_basic2);
	load_test(&test, "\033[36mBasic test 3", &strncat_basic3);
	load_test(&test, "\033[36mBasic test 4", &strncat_basic4);
	load_test(&test, "\033[36mNULL  test 1", &strlen_null);
	load_test(&test, "\033[36mHard  test 1", &strncat_hard);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
