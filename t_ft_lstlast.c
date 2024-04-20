/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_lstlast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:43:23 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 20:52:10 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_lstlast"

static const char	test_cases[] = {
	'a',
	'b',
	'c',
	'd',
	'e',
	'f',
	'\0'
};

void	t_ft_lstlast(void)
{
	t_list	*lp;
	t_list	*temp;

	printf("\x1b[33m%s\n", TEST_NAME);

	lp = NULL;
	ft_lstadd_front(&lp, ft_lstnew((void *)&test_cases[0]));
	temp = lp;
	ft_lstadd_front(&lp, ft_lstnew((void *)&test_cases[0]));
	verify(ft_lstlast(lp) == (t_list *)lp->next, 1);
	if (lp)
		free(lp);
	if (temp)
		free(temp);
}
