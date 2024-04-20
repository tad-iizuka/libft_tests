/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:14:39 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:36:29 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_memcmp"

static const unsigned char test_cases[] = {
	0,
	1,
	2,
    3,
	4,
	5
};

void t_ft_memcmp() {
	printf("\x1b[33m%s\n", TEST_NAME);
	verify((memcmp((void *)&test_cases, (void *)&test_cases, 6) == 0), 1); // same
	verify((memcmp((void *)&test_cases, (void *)&test_cases, 0) == 0), 2); // size zero
	verify((memcmp((void *)&test_cases, (void *)&test_cases[3], 1) == 0 - 3), 3); // diff
}
