# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/19 15:17:25 by sminnaar          #+#    #+#              #
#    Updated: 2019/05/28 15:51:05 by sminnaar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_getchar.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_islower.c \
		ft_isprint.c \
		ft_isupper.c \
		ft_itoa.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_striter.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnequ.c \
		ft_strrchr.c \
		ft_striter.c \
		ft_tolower.c \
		ft_toupper.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Object files created"
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) Compiled"
	@ranlib $(NAME)
	@echo "$(NAME) Indexed"

%.o: %.c
	@gcc $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(OBJ) Cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) Cleaned"

re: fclean all

del: fclean
	@rm -f libft.h.gch
	@rm -f *.out

c:
	@gcc -v $(FLAG) main.c libft.a
