/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:46:40 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:46:41 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncpy_null(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 30)))
		return (0);
	test_memset(dest, 'c', 30);
	if (strcmp(ft_strncpy(dest, "lorem ipsum dolor sit amet", 0), test_strncpy(dest, "lorem ipsum dolor sit amet", 0)))
	{
		free(dest);
		return (-1);
	}
	free(dest);
	return (0);
}
