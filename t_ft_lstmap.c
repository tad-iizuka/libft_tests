/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:44:59 by tiizuka           #+#    #+#             */
/*   Updated: 2024/11/01 14:00:29 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_lstmap"

static const char test_cases[] = {
	"0000000000"
};

// static const char expected_results[] = {
// 	"2222222222"
// };

static char	dst[32];

static void	*convert(void *p)
{
	void *s;

	s = p;
	while (*(char *)(p))
	{
		*(char *)(p) += 1;
		p++;
	}
	return (s);
}

static void	t_free(void *p)
{
	(void)(void *)p;
}

void	t_ft_lstmap(void)
{
	t_list	*lp;
	t_list	*temp;
	t_list	*after;

	printf("\x1b[33m%s\n", TEST_NAME);
	ft_strlcpy(&dst[0], &test_cases[0], sizeof(dst));
	lp = NULL;
	ft_lstadd_front(&lp, ft_lstnew((void *)&dst[0]));
	temp = lp;
	ft_lstadd_front(&lp, ft_lstnew((void *)&dst[0]));
	after = ft_lstmap(lp, convert, t_free);
	if (lp)
		free(lp);
	if (temp)
		free(temp);
	if (after)
		free(after);
	verify(1, 1);
}
