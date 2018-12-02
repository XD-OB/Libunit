/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:51:33 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:51:35 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strstr_basic2(void)
{
	if (test_strcmp(ft_strstr("fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear", "zy"), test_strstr("fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear", "zy")))
		return (-1);
	return (0);
}
