/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:34:36 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:34:38 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		isascii_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_endl("\033[33mISASCII:\n");
	load_test(&test, "\033[36mEasy fonction!", &isascii_basic1);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
