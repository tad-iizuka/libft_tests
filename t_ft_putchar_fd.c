/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 21:16:42 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 21:29:37 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_putchar_fd"

static const char test_cases[] = {
	'[',
	'0',
	'1',
	']',
	'\0'
};

void t_ft_putchar_fd() {
	printf("\x1b[33m%s\x1b[32m\n", TEST_NAME);
    int i = 0;
    while (test_cases[i]) {
		ft_putchar_fd(test_cases[i], 1);
		i++;
	}
}
