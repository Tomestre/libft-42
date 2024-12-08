# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtome-ve <gtome-ve@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/08 12:36:00 by gtome-ve          #+#    #+#              #
#    Updated: 2024/12/08 12:36:00 by gtome-ve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c

FLAGS = -Wall -Wextra -Werror
NAME = libft.a
CC = cc
OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c Makefile libft.h
	$(CC) -o $@ -c $< $(FLAGS)

$(NAME) : $(OBJ)
	ar rcs $@ $^

clean :
	rm -rf *.o
fclean : clean
	rm -f $(NAME)
re : fclean all

.PHONY : clean fclean all re