/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:15:19 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 18:56:42 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <signal.h>
# include <sys/wait.h>
# include <stdio.h>
# include "../../libft/libft.h"
# include "../tests/header.h"

typedef struct			s_unit_test
{
	char				*name;
	int					(*test_fct)(void);
	struct s_unit_test	*next;
}						t_unit_test;

void					load_test(t_unit_test **test_list, char *name, int (*test)(void));
void					clean_test(t_unit_test **test_list);
int						launch_tests(t_unit_test **test_list);
void					print_endl(const char *s);
int						launch_test(t_unit_test **list);
void					load_test(t_unit_test **test_list, char *name, int (*test)(void));
void					t_putnbr(int n);
void					t_putstr(char *s);

#endif
