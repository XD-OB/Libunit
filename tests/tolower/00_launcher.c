/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:52:17 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:52:19 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		tolower_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("\033[33mTOLOWER:\n");
	load_test(&test, "\033[36mBasic test 1", &tolower_basic);
	load_test(&test, "\033[36mBasic test 2", &tolower_null);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
