/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_null_test_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:43:07 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:43:11 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncat_null(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (-1);
	test_memset(dest, 'r', 6);
	if (test_strcmp(ft_strncat(dest, "", 5), test_strncat(dest, "", 5)))
		return (-1);
	return (0);
}
