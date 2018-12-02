/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:43:58 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:44:01 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncmp_basic3(void)
{
	if (ft_strncmp("test", "testss", 4) != test_strncmp("test", "testss", 4))
		return (-1);
	return (0);
}
