/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:26:08 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:54:50 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_isalnum"

static const char test_cases[] = {
	'a',
	'z',
	'A',
	'Z',
	'0',
	'9',
	'/',
	':',
	'@',
	'[',
	'`',
	'{'
};

static const int expected_results[] = {
	TRUE,
	TRUE,
	TRUE,
	TRUE,
	TRUE,
	TRUE,
	FALSE,
	FALSE,
	FALSE,
	FALSE,
	FALSE,
	FALSE
};

void	t_ft_isalnum()
{
	printf("\x1b[33m%s\n", TEST_NAME);
	int	i = 0;
	while (i < (int)sizeof(test_cases))
	{
		verify(ft_isalnum(test_cases[i]) == expected_results[i], (int)i + 1);
		i++;
	}
}
