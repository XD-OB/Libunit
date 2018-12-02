/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:47:08 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:47:10 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_basic1(void)
{
	if (test_strcmp(ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15), test_strnstr("lorem ipsum dolor sit amet", "ipsum", 15)))
		return (-1);
	return (0);
}
