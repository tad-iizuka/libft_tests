/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:08:15 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:36:23 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_memmove"

static const unsigned char test_cases[] = {
	0,
	1,
	2,
    3,
	4,
	5
};

char dst[128];

void t_ft_memmove() {
	printf("\x1b[33m%s\n", TEST_NAME);
	ft_memcpy((void *)&dst[1], (void *)&test_cases, 6);
	verify((memcmp(ft_memmove((void *)&dst, (void *)&dst[1], 6), (void *)&test_cases, 6) == 0), 1); // dst < src
	ft_memcpy((void *)&dst, (void *)&test_cases, 6);
	verify((memcmp(ft_memmove((void *)&dst[1], (void *)&dst, 6), (void *)&test_cases, 6) == 0), 2); // dst > src
	ft_memcpy((void *)&dst, (void *)&test_cases, 6);
	verify((memcmp(ft_memmove((void *)&dst, (void *)&dst, 6), (void *)&test_cases, 6) == 0), 3); // dst = src
}
