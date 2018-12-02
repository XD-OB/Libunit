/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:43:44 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:43:47 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncmp_basic1(void)
{
	if (ft_strncmp("salut", "salut", 5) != test_strncmp("salut", "salut", 5))
		return (-1);
	return (0);
}
