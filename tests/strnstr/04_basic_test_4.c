/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_test_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:47:48 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:47:50 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strnstr_basic4(void)
{
	if (test_strnstr("lorem ipsum dolor sit amet", "dolor", 0) != NULL)
		return (-1);
	return (0);
}
