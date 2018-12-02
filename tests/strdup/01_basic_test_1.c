/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:38:46 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:38:48 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strdup_basic1(void)
{
	if (test_strcmp(ft_strdup("Lorem ipsum dolor sit amet"), test_strdup("Lorem ipsum dolor sit amet")))
		return (-1);
	return (0);
}
