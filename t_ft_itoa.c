/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 20:57:09 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 21:11:23 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_itoa"
#define TEST_NUM 3

static const int test_cases[] = {
	0,
	INT_MAX,
	INT_MIN
};

static const char *expected_results[] = {
	"0",
	"2147483647",
	"-2147483648"
};

void t_ft_itoa() {
	printf("\x1b[33m%s\n", TEST_NAME);
    int i = 0;
	char *p;
    while (i < TEST_NUM) {
		p = ft_itoa(test_cases[i]);
		verify(strcmp(p, expected_results[i]) == 0, i + 1);
		if (p)
			free(p);
		i++;
	}
}
