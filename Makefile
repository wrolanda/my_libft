# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 13:30:14 by wrolanda          #+#    #+#              #
#    Updated: 2021/11/11 17:07:03 by wrolanda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c\
			ft_isascii.c	ft_isprint.c	ft_strlen.c\
			ft_memset.c		ft_bzero.c		ft_memcpy.c\
			ft_toupper.c	ft_tolower.c	ft_strchr.c\
			ft_strrchr.c	ft_strncmp.c	ft_memchr.c\
			ft_memcmp.c		ft_strnstr.c	ft_atoi.c\
			ft_memmove.c	ft_strlcpy.c	ft_strlcat.c\
			ft_calloc.c		ft_strdup.c		ft_substr.c\
			ft_strjoin.c	ft_strtrim.c	ft_itoa.c		ft_split.c\
			ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c\
			ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c\

SRCS_B	=	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c\
			ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c\
			ft_lstclear.c	ft_lstiter.c		ft_lstmap.c

HEADER	=	libft.h
OBJ		=	$(patsubst %.c, %.o, $(SRCS))
OBJ_B	=	$(SRCS_B:%.c=%.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all so clean fclean re bonus

all		:	$(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

$(NAME)	:	$(OBJ) $(HEADER)
	ar	rcs	$(NAME) $?
# $? - The names of all prerequisites (separated by spaces) that are "newer" than the target

%.o	: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
# $<- The name of the first prerequisite.
# $@ - The file name of the target of the rule. If the target is an archive member, then '$ @' denotes the name of the archive file.
bonus	:
	@make OBJ="$(OBJ_B)" all

clean	:
	rm	-f $(OBJ) $(OBJ_B)

fclean	:	clean
	rm	-f $(NAME)

re	:	fclean all
