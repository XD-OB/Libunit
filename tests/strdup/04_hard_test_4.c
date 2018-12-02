/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_hard_test_4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:39:07 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 19:39:10 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strdup_hard(void)
{
	char	*pt;
	char	*st;

	pt = ft_strdup("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam porta tortor eget velit cursus imperdiet. Nunc at nibh sodales, convallis eros sed, vestibulum purus. Phasellus eget nulla enim. Ut placerat risus ac porttitor consectetur");
	st = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam porta tortor eget velit cursus imperdiet. Nunc at nibh sodales, convallis eros sed, vestibulum purus. Phasellus eget nulla enim. Ut placerat risus ac porttitor consectetur";
	if (pt[0] != st[0])
		return (-1);
	return (0);
}
