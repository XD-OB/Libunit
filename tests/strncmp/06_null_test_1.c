/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_null_test_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:44:22 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:44:24 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncmp_null1(void)
{
	if (ft_strncmp("", "asasfeqtrwdfjbcxaEWTERUG", 2) != test_strncmp("", "asasfeqtrwdfjbcxaEWTERUG", 2))
		return (-1);
	return (0);
}
