/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_test_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:44:06 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:44:08 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncmp_basic4(void)
{
	if (ft_strncmp("zyxbcdefgh", "abcdwxyz", 0) != test_strncmp("abcdwxyz", "abcdwxyz", 0))
		return (-1);
	return (0);
}
