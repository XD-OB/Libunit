/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_test2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:52:36 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 18:53:30 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

size_t	test_strlen(const char *str)
{
	size_t	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*test_strdup(const char *s1)
{
	size_t	i;
	char	*dest;

	i = 0;
	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	ft_strcpy(dest, s1);
	return (dest);
}

size_t	test_strlcat(char *dst, const char *src, size_t size)
{
	size_t		destl;
	size_t		srcl;
	size_t		rzlt;
	size_t		x;

	rzlt = 0;
	destl = ft_strlen(dst);
	srcl = ft_strlen(src);
	x = 0;
	rzlt = (size < destl) ? srcl + size : srcl + destl;
	while (src[x] && destl + 1 < size)
		dst[destl++] = src[x++];
	dst[destl] = '\0';
	return (rzlt);
}

char	*test_strncat(char *s1, const char *s2, size_t n)
{
	size_t	x;
	size_t	y;

	x = ft_strlen(s1);
	y = 0;
	while (s2[y] != '\0' && y < n)
		s1[x++] = s2[y++];
	s1[x] = '\0';
	return (s1);
}

char	*test_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while ((haystack[i] != '\0') && (i < len))
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j] || j + i >= len)
				break ;
			j++;
		}
		if (needle[j] == '\0')
			return ((char*)haystack + i);
		i++;
	}
	return (0);
}
