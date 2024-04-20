/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:42:42 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/14 17:52:16 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_calloc"
#define TEST_NUM 3

static const int test_cases[TEST_NUM][2] = {
	{	16, 		16 },
	{ 	0,  		0 },
	{	INT_MAX,	INT_MAX }
};

static const int expected_results[TEST_NUM] = {
	0,
	0,
	ENOMEM
};

void	t_ft_calloc()
{
	void	*p;

	printf("\x1b[33m%s\n", TEST_NAME);
	int	i = 0;
	while (i < TEST_NUM) {
		errno = 0;
		p = (void *)ft_calloc(test_cases[i][0], test_cases[i][1]);
		verify(errno == expected_results[i], (int)i + 1);
		if (p)
			free(p);
		i++;
	}
}
