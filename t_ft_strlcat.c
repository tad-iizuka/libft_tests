/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:22:29 by tiizuka           #+#    #+#             */
/*   Updated: 2024/11/01 13:59:06 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_strlcat"

static const char test_cases[] = {
	'a',
	'b',
	'c',
	'\0'
};

static const char test_cases_add[] = {
    'd',
	'e',
	'f',
	'\0'
};

static const char expected_results[] = {
	'a',
	'b',
	'c',
    'd',
	'e',
	'f',
	'\0'
};

static const char expected_results2[] = {
	'a',
	'b',
	'c',
	'd',
	'\0'
};

static char dst[16];

void t_ft_strlcat() {
	printf("\x1b[33m%s\n", TEST_NAME);
	ft_memcpy((void *)&dst[0], (void *)&test_cases, 4);
	verify(ft_strlcat(&dst[0], test_cases_add, 16) == 6, 1); // enough memory

	ft_memcpy((void *)&dst[0], (void *)&test_cases, 4);
	ft_strlcat(&dst[0], test_cases_add, 16);	// enough memory
	verify(!memcmp(&dst[0], &expected_results[0], 7), 2);

	ft_memcpy((void *)&dst[0], (void *)&test_cases, 4);
	verify(ft_strlcat(&dst[0], test_cases_add, 4) == 6, 3); //

	ft_memcpy((void *)&dst[0], (void *)&test_cases, 4);
	ft_strlcat(&dst[0], test_cases_add, 5);	// not enough memory
	verify(!memcmp(&dst[0], &expected_results2[0], 5), 4);

	ft_memcpy((void *)&dst[0], (void *)&test_cases, 4);
	ft_strlcat(&dst[0], test_cases_add, 0);	// zero size
	verify(!memcmp(&dst[0], &test_cases[0], 4), 4);
}
