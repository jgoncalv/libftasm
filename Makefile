# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgoncalv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/12 19:05:24 by jgoncalv          #+#    #+#              #
#    Updated: 2018/01/03 19:40:55 by jgoncalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a
ASM = nasm -g -f macho64
LD = ld -macosx_version_min 10.8 -lSystem
SRC_DIR = ./src/
OBJ_DIR = ./obj/
SRC_NAME = ft_bzero.s\
		   ft_strcat.s\
		   ft_isalpha.s\
		   ft_isdigit.s\
		   ft_isalnum.s\
		   ft_isascii.s\
		   ft_isprint.s\
		   ft_islower.s\
		   ft_isupper.s\
		   ft_toupper.s\
		   ft_tolower.s\
		   ft_strlen.s\
		   ft_memset.s\
		   ft_memcpy.s\
		   ft_puts.s\
		   ft_strdup.s\
		   ft_cat.s

SRC = $(addprefix $(SRC_DIR), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_DIR), $(SRC_NAME:.s=.o))

TEST = test
GCC = gcc -g -Wall -Werror -Wextra
INC_DIR_TEST = ./include_test/
INC_DIR_LIB = ./include/
SRC_DIR_TEST = ./src_test/
OBJ_DIR_TEST = ./obj_test/
SRC_NAME_TEST = main.c\
				bzero_test.c\
				cat_test.c\
				isalnum_test.c\
				isalpha_test.c\
				isascii_test.c\
				isdigit_test.c\
				islower_test.c\
				isprint_test.c\
				isupper_test.c\
				memcpy_test.c\
				memset_test.c\
				puts_test.c\
				strcat_test.c\
				strdup_test.c\
				strlen_test.c\
				tolower_test.c\
				toupper_test.c\

SRC_TEST = $(addprefix $(SRC_DIR_TEST), $(SRC_NAME_TEST))
OBJ_TEST = $(addprefix $(OBJ_DIR_TEST), $(SRC_NAME_TEST:.c=.o))



all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^

$(OBJ_DIR)%.o: $(SRC_DIR)%.s
	@mkdir -p $(OBJ_DIR)
	$(ASM) $< -o $@

tt: $(NAME) $(TEST)

$(TEST): $(OBJ_TEST)
	GCC -L. -lft $(OBJ_TEST) -o $(TEST)

$(OBJ_DIR_TEST)%.o: $(SRC_DIR_TEST)%.c
	@mkdir -p $(OBJ_DIR_TEST)
	$(GCC) -MMD -c $< -o $@ -I $(INC_DIR_LIB) -I $(INC_DIR_TEST)

clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(OBJ_DIR_TEST)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST)

re: fclean all

.PHONY: all clean fclean re
