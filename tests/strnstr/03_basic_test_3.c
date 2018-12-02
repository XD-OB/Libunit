/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:47:30 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:47:42 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_basic3(void)
{
	if (test_strnstr("lorem ipsum dolor sit amet", "test", 100) != NULL)
		return (-1);
	return (0);
}
