/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 18:15:04 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:55:02 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_isascii"
#define TEST_NUM 5

static const int test_cases[TEST_NUM] = {
	0,		// NUL
	127,	// DEL
	128,	// 0x80
	255,	// 0xFF
	256		// 0x0100
};

static const int expected_results[TEST_NUM] = {
	TRUE,
	TRUE,
	FALSE,
	FALSE,
	FALSE
};

void	t_ft_isascii()
{
	printf("\x1b[33m%s\n", TEST_NAME);
	int	i = 0;
	while (i < TEST_NUM)
	{
		verify(ft_isascii(test_cases[i]) == expected_results[i], (int)i + 1);
		i++;
	}
}
