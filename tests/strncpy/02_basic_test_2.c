/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:45:59 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:46:01 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncpy_basic2(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 50)))
		return (0);
	test_memset(dest, 'c', 50);
	if (strcmp(ft_strncpy(dest, "lorem ipsum dolor sit amet", 30), test_strncpy(dest, "lorem ipsum dolor sit amet", 30)))
	{
		free(dest);
		return (-1);
	}
	free(dest);
	return (0);
}
