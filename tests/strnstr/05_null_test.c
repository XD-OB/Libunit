/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:47:55 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:47:57 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_null(void)
{
	if (test_strcmp(ft_strnstr("lorem ipsum dolor sit amet", "", 100), test_strnstr("lorem ipsum dolor sit amet", "", 100)))
		return (-1);
	return (0);
}
