/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:52:51 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:52:53 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		toupper_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_endl("\033[33mTOUPPER:\n");
	load_test(&test, "\033[36mBasic test", &toupper_basic);
	load_test(&test, "\033[36mNULL  test", &toupper_null);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
