# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/02 01:44:17 by zoulhafi          #+#    #+#              #
#    Updated: 2018/12/02 18:37:49 by obelouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATH_LIBFT = ../libft/

NAME = libunit.a

NAME_TEST = test_exec

PATH_FRAMEWORK = framework

_SRC = clean_test.c launch.c load_test.c print_endl.c print_nbr.c print_str.c

SRC = $(patsubst %.c, $(PATH_FRAMEWORK)/%.c, $(_SRC))

TESTS = tests/atoi/00_launcher.c tests/atoi/01_basic_test_00.c tests/atoi/02_basic_test_01.c tests/atoi/03_basic_test_02.c tests/atoi/04_basic_test_03.c tests/atoi/05_basic_test_04.c tests/atoi/06_basic_test_05.c tests/atoi/07_basic_test_06.c tests/atoi/08_basic_test_07.c tests/atoi/09_basic_test_08.c tests/atoi/10_basic_test_09.c tests/atoi/11_basic_test_10.c tests/atoi/12_basic_test_11.c tests/atoi/13_basic_test_12.c tests/atoi/14_basic_test_13.c tests/atoi/15_basic_test_14.c tests/atoi/16_basic_test_15.c tests/isalnum/00_launcher.c tests/isalnum/01_basic_test.c tests/isalpha/00_launcher.c tests/isalpha/01_basic_test.c tests/isascii/00_launcher.c tests/isascii/01_basic_test.c tests/isdigit/00_launcher.c tests/isdigit/01_basic_test.c tests/isprint/00_launcher.c tests/isprint/01_basic_test.c tests/strchr/00_launcher.c tests/strchr/01_basic_test_1.c tests/strchr/02_basic_test_2.c tests/strchr/03_basic_test_3.c tests/strchr/04_basic_test_4.c tests/strchr/05_null_test.c tests/strdup/00_launcher.c tests/strdup/01_basic_test_1.c tests/strdup/02_basic_test_2.c tests/strdup/03_basic_test_3.c tests/strdup/04_hard_test_4.c tests/strdup/05_null_test.c tests/strlen/00_launcher.c tests/strlen/01_basic_test_1.c tests/strlen/02_basic_test_2.c tests/strlen/03_basic_test_3.c tests/strlen/04_null_test.c tests/strlen/05_bigger_str_test.c tests/strncat/00_launcher.c tests/strncat/01_basic_test_1.c tests/strncat/02_basic_test_2.c tests/strncat/03_basic_test_3.c tests/strncat/04_basic_test_4.c tests/strncat/05_hard_test_1.c tests/strncat/06_null_test_1.c tests/strncmp/00_launcher.c tests/strncmp/01_basic_test_1.c tests/strncmp/02_basic_test_2.c tests/strncmp/03_basic_test_3.c tests/strncmp/04_basic_test_4.c tests/strncmp/05_hard_test_1.c tests/strncmp/06_null_test_1.c tests/strncmp/07_null_test_2.c tests/strncmp/08_null_test_3.c tests/strncpy/00_launcher.c tests/strncpy/01_basic_test_1.c tests/strncpy/02_basic_test_2.c tests/strncpy/03_basic_test_3.c tests/strncpy/04_basic_test_4.c tests/strncpy/05_null_test.c tests/strnstr/00_launcher.c tests/strnstr/01_basic_test_1.c tests/strnstr/02_basic_test_2.c tests/strnstr/03_basic_test_3.c tests/strnstr/04_basic_test_4.c tests/strnstr/05_null_test.c tests/strrchr/00_launcher.c tests/strrchr/01_basic_test_1.c tests/strrchr/02_basic_test_2.c tests/strrchr/03_basic_test_3.c tests/strrchr/04_basic_test_4.c tests/strrchr/05_null_test.c tests/strstr/00_launcher.c tests/strstr/01_basic_test_1.c tests/strstr/02_basic_test_2.c tests/strstr/03_basic_test_3.c tests/strstr/04_null_test_1.c tests/strstr/05_null_test_2.c tests/strstr/06_null_test_3.c tests/tolower/00_launcher.c tests/tolower/01_basic_test.c tests/tolower/02_null_test.c tests/toupper/00_launcher.c tests/toupper/01_basic_test.c tests/toupper/02_null_test.c tests/strcmp/00_launcher.c tests/strcmp/01_basic_test_00.c tests/strcmp/01_basic_test_01.c tests/strcmp/01_basic_test_02.c tests/strcmp/01_basic_test_03.c tests/strcmp/01_basic_test_04.c tests/strcmp/01_basic_test_05.c tests/strcmp/01_basic_test_06.c tests/strcmp/01_basic_test_07.c tests/strcmp/01_basic_test_08.c tests/main.c real_tests/utils.c

REAL_TESTS = real_tests/f_test.c real_tests/f_test2.c real_tests/f_test3.c real_tests/f_test4.c real_tests/f_test5.c

OBJ_TESTS = $(patsubst %.c, %.o, $(notdir $(TESTS)))

OBJ_REAL_TESTS = $(patsubst %.c, %.o, $(notdir $(REAL_TESTS)))

OBJ = $(patsubst %.c, %.o, $(_SRC))

FLAG = -Wall -Wextra -Werror

all: $(NAME)
	
$(NAME) : $(PATH_FRAMEWORK)/libunit.h
	@gcc $(FLAG) -c $(SRC) -I $(PATH_FRAMEWORK) -I $(PATH_LIBFT)/includes -I tests
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

test: re
	@make -C $(PATH_LIBFT) re
	@gcc $(TESTS) $(REAL_TESTS) -I $(PATH_FRAMEWORK) -I $(PATH_LIBFT)/includes -I tests -o $(NAME_TEST) -L $(PATH_LIBFT) -lft -L . -lunit
	@exec ./$(NAME_TEST)
	@exec ./$(NAME_TEST) >> logs/status.log

clean:
	@make -C $(PATH_LIBFT) clean
	@rm -Rf $(OBJ)
	@rm -Rf $(OBJ_TESTS)
	@rm -Rf $(OBJ_REAL_TESTS)

fclean: clean
	@make -C $(PATH_LIBFT) fclean
	@rm -Rf $(NAME)
	@rm -Rf $(NAME_TEST)

re: fclean all
