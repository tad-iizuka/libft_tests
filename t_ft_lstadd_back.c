/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:30:45 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 21:09:48 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_lstadd_back"

static const char	test_cases[] = {
	'a',
	'b',
	'c',
	'd',
	'e',
	'f',
	'\0'
};

void	t_ft_lstadd_back(void)
{
	t_list	*lp;
	t_list	*temp;

	printf("\x1b[33m%s\n", TEST_NAME);
	lp = NULL;
	ft_lstadd_back(&lp, ft_lstnew((void *)&test_cases[0]));
	verify(strcmp((char *)lp->content, &test_cases[0]) == 0, 1);
	verify((t_list *)lp->next == (t_list *) NULL, 2);
	temp = ft_lstnew((void *)&test_cases[0]);
	ft_lstadd_back(&lp, temp);
	verify(strcmp((char *)lp->content, &test_cases[0]) == 0, 3);
	verify((t_list *)lp->next == (t_list *) temp, 4);
	if (lp)
		free(lp);
	if (temp)
		free(temp);
}
