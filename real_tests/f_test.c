/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:52:19 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 18:52:22 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		test_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

char	*test_strcat(char *dest, const char *src)
{
	unsigned int		len_dest;
	unsigned int		i;

	i = 0;
	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

char	*test_strchr(const char *s, int c)
{
	char	*pt;

	pt = (char*)s;
	while (*pt)
	{
		if (*pt == (char)c)
			return (pt);
		pt++;
	}
	if (c == 0 && *pt == '\0')
		return (pt);
	return (NULL);
}

int		test_strcmp(const char *s1, const char *s2)
{
	int				i;
	int				res;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	res = 0;
	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	while (ps1[i] != '\0' || ps2[i] != '\0')
	{
		if (ps1[i] != ps2[i])
		{
			res = (ps1[i] - ps2[i]);
			break ;
		}
		i++;
	}
	return ((int)res);
}

char	*test_strcpy(char *dst, const char *src)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
