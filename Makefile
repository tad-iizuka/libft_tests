# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/28 20:16:08 by tiizuka           #+#    #+#              #
#    Updated: 2024/04/02 20:44:01 by tiizuka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of target
NAME		= libft_tests

# Name of srcs
SRCS		= t_ft_common.c libft_tests_main.c \
			t_ft_atoi.c t_ft_bzero.c t_ft_calloc.c \
			t_ft_isalnum.c t_ft_isalpha.c t_ft_isascii.c t_ft_isdigit.c \
 			t_ft_isprint.c t_ft_memchr.c t_ft_memcmp.c t_ft_memcpy.c \
 			t_ft_memmove.c t_ft_memset.c t_ft_strchr.c t_ft_strdup.c \
			t_ft_strlcat.c t_ft_strlcpy.c t_ft_strlen.c t_ft_strncmp.c \
			t_ft_strnstr.c t_ft_strrchr.c t_ft_tolower.c t_ft_toupper.c \
			\
			t_ft_itoa.c t_ft_putchar_fd.c t_ft_putendl_fd.c t_ft_putnbr_fd.c \
			t_ft_putstr_fd.c t_ft_split.c t_ft_striteri.c t_ft_strjoin.c \
			t_ft_strmapi.c t_ft_strtrim.c t_ft_substr.c
BSRCS		= \
			t_ft_lstadd_back.c t_ft_lstadd_front.c t_ft_lstclear.c t_ft_lstdelone.c \
			t_ft_lstiter.c t_ft_lstlast.c t_ft_lstmap.c t_ft_lstnew.c t_ft_lstsize.c

OBJS		= ${SRCS:.c=.o}
BOBJS		= ${BSRCS:.c=.o}
LIBFT_PATH	= ../libft

# Compiler setting
CC			= cc
CFLAGS		= -Wall -Wextra -Werror

# Archive and remove command
RM			= rm -f

# Default target
all:		${NAME}
			make libft && ./libft_tests

${NAME}:	${OBJS} ${BOBJS}
			${CC} -o ${NAME} ${OBJS} ${BOBJS} ${CFLAGS} ../libft/libft.a

# Rule for bonus
libft:
			make bonus -C $(LIBFT_PATH)

# Rule for cleaning object files
clean:
			${RM} ${OBJS} ${BOBJS}

# Rule for full clean
fclean:		clean
			${RM} ${NAME}

# Rule for re-build
re:			fclean all

# Phony targets
.PHONY:		all clean fclean re bonus
