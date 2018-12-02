/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:40:00 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:40:02 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strlen_basic2(void)
{
	if (ft_strlen("0123456789abcdefghijklmnopqrstuvwxyz")
			!= test_strlen("0123456789abcdefghijklmnopqrstuvwxyz"))
		return (-1);
	return (0);
}
