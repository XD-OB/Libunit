/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:37:37 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:37:39 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strchr_basic3(void)
{
	if (test_strcmp(ft_strchr("efmwaurfas2384eRGDJSM,.", 'e')
				, test_strchr("efmwaurfas2384eRGDJSM,.", 'e')))
		return (-1);
	return (0);
}
