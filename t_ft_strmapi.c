/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:00:15 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/02 16:25:20 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_strmapi"

static const char test_cases[] = {
	"0000000000"
};

static const char expected_results[] = {
	"0123456789"
};

static char	convert(unsigned int i, char c)
{
	c += i;
	return (c);
}

void t_ft_strmapi() {
	char *p;

	printf("\x1b[33m%s\n", TEST_NAME);
	p = ft_strmapi(&test_cases[0], convert);
	verify(strcmp(p, &expected_results[0]) == 0, 1);
	if (p)
		free(p);
}
