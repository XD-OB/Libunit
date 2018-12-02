/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_hard_test_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:44:15 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:44:17 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncmp_hard(void)
{
	if (ft_strncmp("abcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", 71) != test_strncmp("abcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghijabcdefghij", 71))
		return (-1);
	return (0);
}
