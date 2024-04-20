/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:05:32 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:36:04 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_strlcpy"

static const char test_cases[] = {
	'a',
	'b',
	'c',
	'\0'
};

static const char expected_results[] = {
	'a',
	'\0'
};

static const char expected_results2[] = {
	'\0',
	'\0',
	'\0',
	'\0'
};

char dst[6];

void t_ft_strlcpy() {
	printf("\x1b[33m%s\n", TEST_NAME);
	ft_bzero((void *)&dst[0], 6);
	verify(ft_strlcpy(&dst[0], test_cases, 6) == 3, 1); // enough memory
	verify(!memcmp(&dst[0], &test_cases[0], 4), 2);

	ft_bzero((void *)&dst[0], 6);
	verify(ft_strlcpy(&dst[0], test_cases, 2) == 3, 3); // not enough memory
	verify(!memcmp(&dst[0], &expected_results[0], 2), 4);

	ft_bzero((void *)&dst[0], 6);
	verify(ft_strlcpy(&dst[0], test_cases, 0) == 3, 5); // zero size
	verify(!memcmp(&dst[0], &expected_results2[0], 4), 6);
}
