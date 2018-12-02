/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:39:53 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:39:55 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strlen_basic1(void)
{
	if (ft_strlen("Hello World!") != test_strlen("Hello World!"))
		return (-1);
	return (0);
}
