/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:45:29 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:45:33 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncpy_basic1(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 50)))
		return (0);
	test_memset(dest, 'c', 50);
	if (test_strcmp(ft_strncpy(dest, "lorem ipsum dolor sit amet", 5), test_strncpy(dest, "lorem ipsum dolor sit amet", 5)))
	{
		free(dest);
		return (-1);
	}
	free(dest);
	return (0);
}
