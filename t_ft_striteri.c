/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:24:17 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 16:25:14 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_striteri"

static const char test_cases[] = {
	"0000000000"
};

static const char expected_results[] = {
	"0123456789"
};

static void	convert(unsigned int i, char *p)
{
	*p += i;
}

char	dst[32];

void t_ft_striteri() {
	printf("\x1b[33m%s\n", TEST_NAME);
	ft_strlcpy(&dst[0], &test_cases[0], sizeof(dst));
	ft_striteri(&dst[0], convert);
	verify(strcmp(&dst[0], &expected_results[0]) == 0, 1);
}
