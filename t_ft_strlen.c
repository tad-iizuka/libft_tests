/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:24:29 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:36:00 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_strlen"

static const char* test_cases[] = {
    "123",      // 正常なケース
    "",         // 空の文字列
    NULL        // テストの終了を示す NULL
};

static const int expected_results[] = {
    3,
    0,
    0
};

void t_ft_strlen() {
	printf("\x1b[33m%s\n", TEST_NAME);
    int i = 0;
    while (test_cases[i]) {
        int result = ft_strlen(test_cases[i]);
        if (result == expected_results[i]) {
			printf("\x1b[32m" "[%02d]", i + 1);
        } else {
			printf("\x1b[31m" "[%02d]", i + 1);
        }
        i++;
    }
}
