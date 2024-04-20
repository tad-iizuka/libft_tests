/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tests_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 20:53:24 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 21:02:32 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../libft/libft.h"

void t_ft_atoi(); void t_ft_bzero(); void t_ft_calloc(); void t_ft_isalnum();
void t_ft_isalpha(); void t_ft_isascii(); void t_ft_isdigit(); void t_ft_isprint();
void t_ft_memchr(); void t_ft_memcmp(); void t_ft_memcpy(); void t_ft_memmove();
void t_ft_memset(); void t_ft_strchr(); void t_ft_strdup(); void t_ft_strlcat();
void t_ft_strlcpy(); void t_ft_strlen(); void t_ft_strncmp(); void t_ft_strnstr();
void t_ft_strrchr(); void t_ft_tolower(); void t_ft_toupper(); void t_ft_itoa();
void t_ft_putchar_fd(); void t_ft_putendl_fd(); void t_ft_putnbr_fd();
void t_ft_putstr_fd(); void t_ft_split(); void t_ft_striteri(); void t_ft_strjoin();
void t_ft_strmapi(); void t_ft_strtrim(); void t_ft_substr(); void t_ft_lstsize();

void t_ft_lstadd_back(); void t_ft_lstadd_front(); void t_ft_lstclear();
void t_ft_lstdelone(); void t_ft_lstiter(); void t_ft_lstlast(); void t_ft_lstmap();
void t_ft_lstnew(); void t_ft_lstsize();

int	main(void)
{
	printf("\n");
	printf("\x1b[36m// 	\x1b[32m Passed: [xx]\n");
	printf("\x1b[36m// 	\x1b[31m Failed: [xx]\n");
	printf("\n");

	t_ft_atoi(); printf("\n");
	t_ft_bzero(); printf("\n");
	t_ft_calloc(); printf("\n");
	t_ft_isalnum(); printf("\n");
	t_ft_isalpha(); printf("\n");
	t_ft_isascii(); printf("\n");
	t_ft_isdigit(); printf("\n");
	t_ft_isprint(); printf("\n");
	t_ft_memchr(); printf("\n");
	t_ft_memcmp(); printf("\n");
	t_ft_memcpy(); printf("\n");
	t_ft_memmove(); printf("\n");
	t_ft_memset(); printf("\n");
	t_ft_strchr(); printf("\n");
	t_ft_strdup(); printf("\n");
	t_ft_strlcat(); printf("\n");
	t_ft_strlcpy(); printf("\n");
	t_ft_strlen(); printf("\n");
	t_ft_strncmp(); printf("\n");
	t_ft_strnstr(); printf("\n");
	t_ft_strrchr(); printf("\n");
	t_ft_tolower(); printf("\n");
	t_ft_toupper(); printf("\n");
	t_ft_itoa(); printf("\n");
	t_ft_putchar_fd(); printf("\n");
	t_ft_putendl_fd();
	t_ft_putnbr_fd(); printf("\n");
	t_ft_putstr_fd(); printf("\n");
	t_ft_split(); printf("\n");
	t_ft_striteri(); printf("\n");
	t_ft_strjoin(); printf("\n");
	t_ft_strmapi(); printf("\n");
	t_ft_strtrim(); printf("\n");
	t_ft_substr(); printf("\n");
	t_ft_lstadd_back(); printf("\n");
	t_ft_lstadd_front(); printf("\n");
	t_ft_lstclear(); printf("\n");
	t_ft_lstdelone(); printf("\n");
	t_ft_lstiter(); printf("\n");
	t_ft_lstlast(); printf("\n");
	t_ft_lstmap(); printf("\n");
	t_ft_lstnew(); printf("\n");
	t_ft_lstsize(); printf("\n");
}
