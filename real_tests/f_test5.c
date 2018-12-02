/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_test5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:54:07 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 18:54:10 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		test_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	diff = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (diff != 0)
		{
			break ;
		}
		i++;
	}
	return (diff);
}

char	*test_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
