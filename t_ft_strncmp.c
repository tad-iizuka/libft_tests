/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:38:58 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:35:57 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_strncmp"

static const char test_cases[] = {
	'a',
	'b',
	'c',
	'\0'
};

static const char test_cases2[] = {
	'a',
	'b',
	'c',
	'\0'
};

void t_ft_strncmp() {
	printf("\x1b[33m%s\n", TEST_NAME);
	verify(ft_strncmp(&test_cases[0], &test_cases2[0], 4) == 0, 1);
	verify(ft_strncmp(&test_cases[0], &test_cases2[0], 0) == 0, 2);
	verify(ft_strncmp(&test_cases[0], &test_cases2[1], 1) == 'a' - 'b', 3);
	verify(ft_strncmp(&test_cases[3], &test_cases2[0], 1) == '\0' - 'a', 4);
}
