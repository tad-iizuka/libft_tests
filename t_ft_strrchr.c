/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:38:10 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:35:50 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_strrchr"

static const char test_cases[] = {
	'a',
	'b',
	'c',
    'd',
	'e',
	'f',
	'\0'
};

void t_ft_strrchr() {
	printf("\x1b[33m%s\n", TEST_NAME);
	verify(!memcmp(ft_strrchr((void *)&test_cases, (int)'a'), &test_cases[0], 1), 1); // start
	verify(!memcmp(ft_strrchr((void *)&test_cases, (int)'f'), &test_cases[5], 1), 2); // end
	verify((ft_strrchr((void *)&test_cases, (int)'z') == NULL), 3); // not found
	verify(!memcmp(ft_strrchr((void *)&test_cases, (int)'\0'), &test_cases[6], 1), 4); // end
}
