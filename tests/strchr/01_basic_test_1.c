/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:36:26 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:37:24 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strchr_basic1(void)
{
	if (test_strcmp(ft_strchr("abcdef", 'd'), test_strchr("abcdef", 'd')))
		return (-1);
	return (0);
}
