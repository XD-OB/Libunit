/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:48:41 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:48:43 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strrchr_basic2(void)
{
	if (test_strcmp(ft_strrchr("efmwaurfas2384RGDJSM,.", '.'), test_strrchr("efmwaurfas2384RGDJSM,.", '.')))
		return (-1);
	return (0);
}
