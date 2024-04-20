/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:56:07 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 18:30:27 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_lstnew"

static const char	test_cases[] = {
	'a',
	'b',
	'c',
	'd',
	'e',
	'f',
	'\0'
};

void	t_ft_lstnew(void)
{
	t_list	*lp;

	printf("\x1b[33m%s\n", TEST_NAME);
	lp = ft_lstnew((void *)&test_cases[0]);
	verify(strcmp((char *)lp->content, &test_cases[0]) == 0, 1);
	verify((t_list *)lp->next == (t_list *) NULL, 2);
	if (lp)
		free(lp);
}
