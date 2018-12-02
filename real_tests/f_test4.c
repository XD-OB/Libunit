/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_test4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:53:52 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 18:53:59 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		test_atoi(const char *str)
{
	int		s;
	int		rzlt;
	size_t	i;

	i = 0;
	rzlt = 0;
	while (str[i] == ' ')
		i++;
	s = str[i] == '-' ? -1 : 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		rzlt = rzlt + (str[i] - 48);
		if ((str[i + 1] >= '0') && (str[i + 1] <= '9'))
			rzlt = rzlt * 10;
		i++;
	}
	return (rzlt * s);
}

int		test_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

int		test_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int		test_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

int		test_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
