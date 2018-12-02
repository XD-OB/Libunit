/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:47:14 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:47:17 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_basic2(void)
{
	if (test_strnstr("lorem ipsum dolor sit amet", "sit", 10) != NULL)
		return (-1);
	return (0);
}
