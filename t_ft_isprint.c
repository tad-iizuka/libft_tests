/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:07:03 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:55:12 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_isprint"
#define TEST_NUM 6

static const int test_cases[TEST_NUM] = {
	' ',
	'~',
	31,		// 0x1F
	127,	// DEL
	128,	// 0x80
	255		// 0xFF
};

static const int expected_results[TEST_NUM] = {
	TRUE,
	TRUE,
	FALSE,
	FALSE,
	FALSE,
	FALSE
};

void	t_ft_isprint()
{
	printf("\x1b[33m%s\n", TEST_NAME);
	int	i = 0;
	while (i < TEST_NUM)
	{
		verify(ft_isprint(test_cases[i]) == expected_results[i], (int)i + 1);
		i++;
	}
}
