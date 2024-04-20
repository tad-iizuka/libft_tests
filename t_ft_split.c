/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:45:06 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 15:11:50 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_split"

static const char *test_cases[] = {
	"",
    "abcabcba",
    "aabcaabcbaa",
    NULL
};

void t_ft_split() {
	printf("\x1b[33m%s\n", TEST_NAME);
	char **p;
	p = ft_split(test_cases[0], 'z');
	verify(p[0] == NULL, 1);
	free(p);
	p = ft_split(test_cases[1], 'z');
	verify(strcmp(p[0], test_cases[1]) == 0, 2);
	free(p);
	p = ft_split(test_cases[1], 'a');
	verify(strcmp(p[0], "bc") == 0, 3);
	verify(strcmp(p[1], "bcb") == 0, 4);
	free(p);
	p = ft_split(test_cases[2], 'a');
	verify(strcmp(p[0], "bc") == 0, 5);
	verify(strcmp(p[1], "bcb") == 0, 6);
	free(p);
}
