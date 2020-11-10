# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmaduekw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/26 19:28:54 by zmaduekw          #+#    #+#              #
#    Updated: 2020/08/26 19:52:50 by zmaduekw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -c

SOURCES	= ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
										ft_tolower.c ft_toupper.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
										ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
										ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
										ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_itoa.c \
										ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
										ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c

SOURCES_B = ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.c \
											ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJETS = $(SOURCES:%.c=%.o)
OBJECTS_B = $(SOURCES_B:%.c=%.o)
INCLUDES=./

all: $(NAME)
$(NAME):
	@$(CC) $(CFLAGS) $(SOURCES) -I$(INCLUDES)
	@ar rc $(NAME) $(OBJETS)
	@ranlib $(NAME)

bonus:
	@$(CC) $(CFLAGS) $(SOURCES_B)  -I$(INCLUDES)
	@ar rc $(NAME) $(OBJECTS_B)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJETS) $(OBJECTS_B)

fclean: 	clean
	@rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re bonus