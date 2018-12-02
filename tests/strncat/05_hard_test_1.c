/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_hard_test_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:42:57 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:43:00 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncat_hard(void)
{
	char *dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (-1);
	test_memset(dest, 'r', 6);
	if (test_strcmp(ft_strncat(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse at neque in sapien efficitur malesuada. Etiam viverra faucibus nibh", 5), test_strncat(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse at neque in sapien efficitur malesuada. Etiam viverra faucibus nibh", 5)))
		return (-1);
	return (0);
}
