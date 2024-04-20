/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:27:15 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 16:47:03 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_strtrim"

static const char *test_cases[] = {
	"",
    "abcababc",
    "aabcaabcbaa",
    NULL
};

char	dst[32];

void t_ft_strtrim() {
	printf("\x1b[33m%s\n", TEST_NAME);
	char *p;
	ft_strlcpy(&dst[0], test_cases[0], sizeof(dst));
	p = ft_strtrim(&dst[0], "ab");
	verify(strcmp(p, test_cases[0]) == 0, 1);
	ft_strlcpy(&dst[0], test_cases[1], sizeof(dst));
	p = ft_strtrim(&dst[0], "ab");
	verify(strcmp(p, "cababc") == 0, 2);
	ft_strlcpy(&dst[0], test_cases[2], sizeof(dst));
	p = ft_strtrim(&dst[0], "a");
	verify(strcmp(p, "bcaabcb") == 0, 3);
}
