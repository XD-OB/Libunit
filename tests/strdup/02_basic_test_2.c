/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:38:52 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:38:54 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strdup_basic2(void)
{
	if (test_strcmp(ft_strdup("Lorem ipsum"), test_strdup("Lorem ipsum")))
		return (-1);
	return (0);
}
