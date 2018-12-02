/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:37:30 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:37:32 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strchr_basic2(void)
{
	if (test_strcmp(ft_strchr("efmwaurfas2384RGDJSM,.", '.')
				, test_strchr("efmwaurfas2384RGDJSM,.", '.')))
		return (-1);
	return (0);
}
