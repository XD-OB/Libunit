/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_test_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:42:49 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:42:51 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncat_basic4(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (-1);
	test_memset(dest, 'r', 6);
	if (test_strcmp(ft_strncat(dest, "12345123", 10), test_strncat(dest, "12345123", 10)))
		return (-1);
	return (0);
}
