/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:48:49 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:48:57 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strrchr_basic3(void)
{
	if (test_strcmp(ft_strrchr("efmwaurfas2384eRGDJSM,.", 'e'), test_strrchr("efmwaurfas2384eRGDJSM,.", 'e')))
		return (-1);
	return (0);
}
