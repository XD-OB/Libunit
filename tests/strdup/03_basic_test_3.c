/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:38:59 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:39:03 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strdup_basic3(void)
{
	if (test_strcmp(ft_strdup("Lorem ipsumLorem ipsum"), test_strdup("Lorem ipsumLorem ipsum")))
		return (-1);
	return (0);
}
