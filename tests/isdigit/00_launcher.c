/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:35:11 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:35:14 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		isdigit_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_endl("\033[33mISDIGIT:\n");
	load_test(&test, "\033[36mEasy fonction!", &isdigit_basic1);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
