/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:57:54 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 18:57:56 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	clean_test(t_unit_test **test_list)
{
	t_unit_test	*tmp1;
	t_unit_test	*tmp2;

	if (!test_list || !(*test_list))
		return ;
	tmp2 = *test_list;
	tmp1 = tmp2;
	while (tmp1)
	{
		tmp1 = tmp2;
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = NULL;
	}
	*test_list = NULL;
}
