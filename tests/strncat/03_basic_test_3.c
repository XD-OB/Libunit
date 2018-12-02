/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:42:42 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:42:44 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncat_basic3(void)
{
	char *dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (-1);
	test_memset(dest, 'r', 6);
	if (test_strcmp(ft_strncat(dest, "12345123", 0), test_strncat(dest, "12345123", 0)))
		return (-1);
	return (0);
}
