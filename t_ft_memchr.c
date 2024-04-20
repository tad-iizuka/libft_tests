/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:20:46 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:35:18 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_memchr"

static const unsigned char test_cases[] = {
	0,
	1,
	2,
    3,
	4,
	5
};

void t_ft_memchr() {
	printf("\x1b[33m%s\n", TEST_NAME);
	verify((ft_memchr((void *)&test_cases, 2, 1) == NULL), 1); // not found
	verify(!memcmp(ft_memchr((void *)&test_cases, 0, 6), &test_cases[0], 1), 2); // start
	verify(!memcmp(ft_memchr((void *)&test_cases, 5 + 256, 6), &test_cases[5], 1), 3); // cast
	verify((ft_memchr((void *)&test_cases, 2, 0) == NULL), 4); // size zero
}
