/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:01:21 by obelouch          #+#    #+#             */
/*   Updated: 2018/12/02 22:18:39 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

static void	intro_tbiba(void)
{

	t_putstr("\033[35m      '||'       ||  '||                         ||    .  \033[0m\n");
	t_putstr("\033[35m       ||       ...   || ...  ... ...  .. ...   ...  .||. \033[0m\n");
	t_putstr("\033[35m       ||        ||   ||'  ||  ||  ||   ||  ||   ||   ||  \033[0m\n");
	t_putstr("\033[35m       ||        ||   ||    |  ||  ||   ||  ||   ||   ||   \033[0m\n");
	t_putstr("\033[35m      .||.....| .||.  '|...'   '|..'|. .||. ||. .||.  '|.' \033[0m\n");
	t_putstr("\n");
	t_putstr("\033[32m              00110001 00110011 00110011 00110111         \033[0m\n");
	t_putstr("\033[32m               *##   Made by: TBIBA_SQUAD !   ##*        \033[0m\n");
	t_putstr("\033[32m               *##        !! ENJOY !!         ##*         \033[0m\n");
}

static void	end_tbiba(void)
{
	t_putstr("\033[35m\n______________THE-END_________________\033[0m\n");
}

int			main(void)
{
	intro_tbiba();
	atoi_launcher();
	isalnum_launcher();
	isalpha_launcher();
	isascii_launcher();
	isdigit_launcher();
	isprint_launcher();
	strchr_launcher();
	strdup_launcher();
	strlen_launcher();
	strncat_launcher();
	strncmp_launcher();
	strncpy_launcher();
	strnstr_launcher();
	strrchr_launcher();
	strstr_launcher();
	strcmp_launcher();
	tolower_launcher();
	toupper_launcher();
	end_tbiba();
	return (0);
}
