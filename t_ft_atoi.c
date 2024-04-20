/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 20:53:18 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/14 17:49:30 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_atoi"

static const char* test_cases[] = {
    "123",      // 正常なケース
    "-456",     // 負の値
    "0",        // ゼロ
    "123abc",   // 数字以外の文字が後ろにある
    "abc123",   // 数字以外の文字が前にある
    "",         // 空の文字列
    "  789",    // 先頭にスペースがある
    "987  ",    // 末尾にスペースがある
    "+100",     // プラス記号
    "18446744073709551615", // ULONG_MAX
    "9223372036854775807",  // LONG_MAX
    "-9223372036854775808", // LONG_MIN
    NULL        // テストの終了を示す NULL
};

void t_ft_atoi() {
	printf("\x1b[33m%s\n", TEST_NAME);
    int i = 0;
    while (test_cases[i]) {
        int result = ft_atoi(test_cases[i]);
        int expected_results = atoi(test_cases[i]);
        verify(result == expected_results, (int)i + 1);
        i++;
    }
}
