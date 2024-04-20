/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:54:25 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 17:28:15 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_substr"

static const char test_cases[] = {
	"0123456789"
};

void t_ft_substr() {
	char *p;

	printf("\x1b[33m%s\n", TEST_NAME);
	p = ft_substr(&test_cases[0], 0, sizeof(test_cases)); // "0123456789"
	verify(strcmp(p, &test_cases[0]) == 0, 1);
	if (p)
		free(p);
	p = ft_substr(&test_cases[0], 0, INT_MAX); // "0123456789"
	verify(strcmp(p, &test_cases[0]) == 0, 2);
	if (p)
		free(p);
	p = ft_substr(&test_cases[0], 5, sizeof(test_cases)); // "56789"
	verify(strcmp(p, &test_cases[5]) == 0, 3);
	if (p)
		free(p);
	p = ft_substr(&test_cases[0], 20, sizeof(test_cases)); // ""
	verify(strcmp(p, "") == 0, 4);
	if (p)
		free(p);
	p = ft_substr(&test_cases[0], 0, 0); // ""
	verify(strcmp(p, "") == 0, 5);
	if (p)
		free(p);
}
