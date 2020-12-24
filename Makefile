# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/23 00:36:30 by bhenne            #+#    #+#              #
#    Updated: 2015/05/14 18:54:56 by bhenne           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

FLAGS = -f macho64

CC = ~/.brew/bin/nasm $(FLAGS)

SRC = 	ft_bzero.s \
		ft_isdigit.s \
		ft_isascii.s \
		ft_tolower.s \
		ft_toupper.s \
		ft_isalnum.s \
		ft_isalpha.s \
		ft_islower.s \
		ft_isprint.s \
		ft_strlen.s \
		ft_puts.s \
		ft_strdup.s \
		ft_memcpy.s \
		ft_memset.s \
		ft_putlstr.s \
		ft_cat.s \
		ft_strcat.s \
		ft_isupper.s 

OBJ = $(SRC:.s=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.s
	$(CC) -o $@ $< 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
