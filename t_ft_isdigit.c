/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:48:52 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:55:08 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_isdigit"
#define TEST_NUM 11

static const int test_cases[TEST_NUM] = {
	'a',
	'z',
	'A',
	'Z',
	'0',
	'9',
	0,		// NUL
	127,	// DEL
	128,	// 0x80
	255,	// 0xFF
	256		// 0x0100
};

static const int expected_results[TEST_NUM] = {
	FALSE,
	FALSE,
	FALSE,
	FALSE,
	TRUE,
	TRUE,
	FALSE,
	FALSE,
	FALSE,
	FALSE,
	FALSE
};

void	t_ft_isdigit()
{
	printf("\x1b[33m%s\n", TEST_NAME);
	int	i = 0;
	while (i < TEST_NUM)
	{
		verify(ft_isdigit(test_cases[i]) == expected_results[i], (int)i + 1);
		i++;
	}
}
