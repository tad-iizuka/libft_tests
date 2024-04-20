/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 21:40:50 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 21:48:32 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_putnbr_fd"
#define TEST_NUM 3

static const int test_cases[] = {
	0,
	INT_MAX,
	INT_MIN
};

void t_ft_putnbr_fd() {
	printf("\x1b[33m%s\x1b[32m\n", TEST_NAME);
    int i = 0;
    while (i < TEST_NUM) {
		ft_putnbr_fd(test_cases[i], 1);
		i++;
		if (i != TEST_NUM)
			printf("\n");
	}
}
