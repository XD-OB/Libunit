/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:48:32 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:48:34 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strrchr_basic1(void)
{
	if (test_strcmp(ft_strrchr("abcdef", 'd'), test_strrchr("abcdef", 'd')))
		return (-1);
	return (0);
}
