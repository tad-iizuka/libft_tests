/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_lstsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:26:26 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 20:48:29 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_lstsize"

static const char	test_cases[] = {
	'a',
	'b',
	'c',
	'd',
	'e',
	'f',
	'\0'
};

void	t_ft_lstsize(void)
{
	t_list	*lp;
	t_list	*temp;

	printf("\x1b[33m%s\n", TEST_NAME);
	lp = NULL;
	ft_lstadd_front(&lp, ft_lstnew((void *)&test_cases[0]));
	temp = lp;
	ft_lstadd_front(&lp, ft_lstnew((void *)&test_cases[0]));
	verify(ft_lstsize(lp) == 2, 1);
	if (lp)
		free(lp);
	if (temp)
		free(temp);
}
