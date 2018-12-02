/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null_test_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:51:46 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:51:48 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strstr_null1(void)
{
	if (test_strcmp(ft_strstr("fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear", ""), test_strstr("fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear", "")))
		return (-1);
	return (0);
}
