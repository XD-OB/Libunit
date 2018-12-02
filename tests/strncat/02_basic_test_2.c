/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:42:25 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:42:27 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncat_basic2(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (-1);
	test_memset(dest, 'r', 6);
	if (test_strcmp(ft_strncat(dest, "12345123", 5), test_strncat(dest, "12345123", 5)))
		return (-1);
	return (0);
}
