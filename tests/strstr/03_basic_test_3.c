/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:51:40 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:51:41 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strstr_basic3(void)
{
	if (test_strstr("fuzzy wuzzy was a bear but wuzzy fuzzy was not a bear", "xxx") != NULL)
		return (-1);
	return (0);
}
