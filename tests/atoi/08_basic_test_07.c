/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_basic_test_07.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:05:26 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:05:28 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		atoi_basic8(void)
{
	if (ft_atoi("546:5") != 546)
		return (-1);
	return (0);
}