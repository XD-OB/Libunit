/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:33:23 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:33:26 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		isalnum_launcher(void)
{
	int				ret;
	t_unit_test		*test;

	test = NULL;
	print_endl("\033[33mISALNUM:\n");
	load_test(&test, "\033[36mEasy fonction!", &isalnum_basic1);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
