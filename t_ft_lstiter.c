/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:39:14 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 21:25:45 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_lstiter"

static const char test_cases[] = {
	"0000000000"
};

static const char expected_results[] = {
	"2222222222"
};

char	dst[32];

static void	convert(void *p)
{
	while (*(char *)(p))
	{
		*(char *)(p) += 1;
		p++;
	}
}

void	t_ft_lstiter(void)
{
	t_list	*lp;
	t_list	*temp;

	printf("\x1b[33m%s\n", TEST_NAME);
	ft_strlcpy(&dst[0], &test_cases[0], sizeof(dst));
	lp = NULL;
	ft_lstadd_front(&lp, ft_lstnew((void *)&dst[0]));
	temp = lp;
	ft_lstadd_front(&lp, ft_lstnew((void *)&dst[0]));
	ft_lstiter(lp, convert);
	verify(strcmp((char *)lp->content, &expected_results[0]) == 0, 1);
	if (lp)
		free(lp);
	if (temp)
		free(temp);
}
