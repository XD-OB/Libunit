/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:50:39 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:51:28 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strstr_basic1(void)
{
	if (test_strcmp(ft_strstr("fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear", "but"), test_strstr("fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear", "but")))
		return (-1);
	return (0);
}
