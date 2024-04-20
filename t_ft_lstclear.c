/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_lstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:37:35 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 21:04:40 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_lstclear"

static const char	test_cases[] = {
	'a',
	'b',
	'c',
	'd',
	'e',
	'f',
	'\0'
};

static void	t_free(void *p)
{
	(void)(void *)p;
}

void	t_ft_lstclear(void)
{
	t_list	*lp;

	printf("\x1b[33m%s\n", TEST_NAME);
	lp = NULL;
	ft_lstadd_front(&lp, ft_lstnew((void *)&test_cases[0]));
	ft_lstadd_front(&lp, ft_lstnew((void *)&test_cases[0]));
	ft_lstclear(&lp, t_free);
	verify(1, 1);
}
