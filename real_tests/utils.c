/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:20:40 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 18:54:20 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <unistd.h>

void	t_putstr(char *s)
{
	int		i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			write(1, (s + i), 1);
			i++;
		}
	}
}

void	t_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putnbr(214748364);
			ft_putchar('8');
			return ;
		}
		else
			nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
