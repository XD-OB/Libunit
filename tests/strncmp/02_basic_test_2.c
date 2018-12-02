/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:43:51 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:43:53 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncmp_basic2(void)
{
	if (ft_strncmp("testss", "test", 7) != test_strncmp("testss", "test", 7))
		return (-1);
	return (0);
}
