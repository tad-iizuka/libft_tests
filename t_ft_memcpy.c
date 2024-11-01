/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:39:31 by tiizuka           #+#    #+#             */
/*   Updated: 2024/11/01 13:58:50 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_memcpy"

static const unsigned char test_cases[] = {
	0,
	1,
	2,
    3,
	4,
	5
};

static char dst[128];

void t_ft_memcpy() {
	printf("\x1b[33m%s\n", TEST_NAME);
	verify((memcmp(ft_memcpy((void *)&dst, (void *)&test_cases, 6), (void *)&test_cases, 6) == 0), 1); // same
	verify((memcmp(ft_memcpy((void *)&dst, (void *)&test_cases[5], 1), (void *)&test_cases[5], 1) == 0), 2); // same
	verify((memcmp(ft_memcpy((void *)&dst, (void *)&test_cases[5], 0), (void *)&test_cases[5], 1) == 0), 3); // size zero
}
