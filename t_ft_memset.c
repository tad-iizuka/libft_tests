/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:39:26 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:36:20 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_memset"

static const unsigned char test_cases[] = {
	128,
	128,
	128,
    128,
	128,
	128
};

char dst[128];

void t_ft_memset() {
	printf("\x1b[33m%s\n", TEST_NAME);
	ft_bzero((void *)&dst, 128);
	verify((memcmp(ft_memset((void *)&dst, 128, 6), (void *)&test_cases, 6) == 0), 1);
}
