/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_null_test_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:44:31 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:44:33 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncmp_null2(void)
{
	if (ft_strncmp("asasfeqtrwdfjbcxaEWTERUG", "", 15) != test_strncmp("asasfeqtrwdfjbcxaEWTERUG", "", 15))
		return (-1);
	return (0);
}
