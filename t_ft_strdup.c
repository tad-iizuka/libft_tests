/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:12:28 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:36:13 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_strdup"

static const char test_cases[] = {
	'a',
	'b',
	'c',
    'd',
	'e',
	'f',
	'\0'
};

void t_ft_strdup() {
	printf("\x1b[33m%s\n", TEST_NAME);
	verify(!memcmp(ft_strdup((void *)&test_cases), &test_cases[0], 7), 1); //
	verify(!memcmp(ft_strdup((void *)&test_cases[6]), &test_cases[6], 1), 2); //
}
