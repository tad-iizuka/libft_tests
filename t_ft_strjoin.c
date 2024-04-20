/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:47:51 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 15:58:12 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_strjoin"

static const char *test_cases[] = {
	"",
	"",
	"a",
	"a",
	NULL
};

static const char *test_cases2[] = {
	"",
	"a",
	"",
	"a",
	NULL
};

static const char *expected_results[] = {
	"",
	"a",
	"a",
	"aa",
	NULL
};

void t_ft_strjoin() {
	int i = 0;
	char *p;

	printf("\x1b[33m%s\n", TEST_NAME);
	while (test_cases[i])
	{
		p = ft_strjoin(test_cases[i], test_cases2[i]);
		verify(strcmp(p, expected_results[i]) == 0, i + 1);
		if (p)
			free(p);
		i++;
	}
}
