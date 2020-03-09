# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/06 14:36:15 by zmaduekw          #+#    #+#              #
#    Updated: 2020/03/09 10:28:01 by zmaduekw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar rcs
RANLIB = ranlib

NAME	= libft.a
HEAD	= libft.h
SRCS	= ft_memset.c ft_bzero.c	\
		  ft_memcpy.c ft_memccpy.c	\
		  ft_memmove.c ft_memchr.c	\
		  ft_memcmp.c ft_strlen.c	\
		  ft_strdup.c ft_strcpy.c	\
		  ft_strncpy.c ft_strcat.c	\
		  ft_strncat.c ft_strlcat.c	\
		  ft_strchr.c ft_strrchr.c	\
		  ft_strstr.c ft_strnstr.c	\
		  ft_strcmp.c ft_strncmp.c ft_atoi.c		\
		  ft_isalpha.c ft_isdigit.c ft_isalnum.c	\
		  ft_isascii.c ft_isprint.c ft_toupper.c	\
		  ft_tolower.c ft_memalloc.c ft_memdel.c	\
		  ft_strnew.c ft_strdel.c ft_strclr.c		\
		  ft_striter.c ft_striteri.c ft_strmap.c	\
		  ft_strmapi.c ft_strequ.c ft_strnequ.c		\
		  ft_strsub.c ft_strjoin.c  ft_strtrim.c	\
		  ft_strsplit.c ft_itoa.c ft_putchar.c		\
		  ft_putstr.c ft_putendl.c ft_putnbr.c		\
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c	\
		  ft_putnbr_fd.c	

OBJS	= $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS)
	@$(AR) $(NAME) $(OBJS)
	@$(RANLIB) $(NAME)
	@echo "[INFO] Library [$(NAME)] created!"

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean:
	@rm -f $(NAME) $(OBJS)
	@echo "[INFO] Library [$(NAME)] removed!"

re: fclean all
