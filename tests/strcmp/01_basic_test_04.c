/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_04.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:19:13 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 18:19:14 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		basic_test_04(void)
{
	if (ft_strcmp("ABCD", "ABCDF") != -70)
		return (-1);
	return (0);
}