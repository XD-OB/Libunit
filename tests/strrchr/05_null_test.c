/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:49:11 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:49:14 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strrchr_null(void)
{
	if (test_strcmp(ft_strrchr("efmw", 0), test_strrchr("efmw", 0)))
		return (-1);
	return (0);
}
