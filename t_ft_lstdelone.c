/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:40:55 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 21:04:44 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_lstdelone"

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

void	t_ft_lstdelone(void)
{
	t_list	*lp;
	t_list	*temp;

	printf("\x1b[33m%s\n", TEST_NAME);
	lp = NULL;
	ft_lstadd_front(&lp, ft_lstnew((void *)&test_cases[0]));
	temp = lp;
	ft_lstadd_front(&lp, ft_lstnew((void *)&test_cases[0]));
	ft_lstdelone(temp, t_free);
	ft_lstdelone(lp, t_free);
	verify(1, 1);
}
