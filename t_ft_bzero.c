/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 09:34:03 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:37:02 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_bzero"

static const char *test_cases[] = {
    "abcdefghi",	// 正常なケース
    "",         	// 空の文字列
    NULL        	// テストの終了を示す NULL
};

char temp[128];

void t_ft_bzero() {
	printf("\x1b[33m%s\n", TEST_NAME);
	int	i = 0;
	while (test_cases[i]) {
		size_t size = ft_strlen(test_cases[0]);
		ft_strlcat(temp, (const char *)&test_cases[i][0], size);
		ft_bzero(temp, size);
		size_t x = 0;
		for (x = 0; x < size; x++) {
			if (temp[x] != '\0') {
				printf("\x1b[31m" "[%02d]", (int)i + 1);
			}
		}
		if (x == size)
			printf("\x1b[32m" "[%02d]", (int)i + 1);
		i++;
	}
}
