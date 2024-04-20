/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:47:32 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:35:47 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_tolower"

static const char test_cases[] = {
	'A',
	'Z',
	'a',
	'z',
	'0',
	'9',
	'\0'
};

static const char expected_results[] = {
	'a',
	'z',
	'a',
	'z',
	'0',
	'9',
	'\0'
};

void t_ft_tolower() {
	printf("\x1b[33m%s\n", TEST_NAME);
    int i = 0;
    while (test_cases[i]) {
		verify(ft_tolower(test_cases[i]) == expected_results[i], i + 1);
		i++;
	}
}
