/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 21:35:09 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 21:37:04 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_putendl_fd"

static const char test_cases[] = {
	'[',
	'0',
	'1',
	']',
	'\0'
};

void t_ft_putendl_fd() {
	printf("\x1b[33m%s\x1b[32m\n", TEST_NAME);
	ft_putendl_fd((char *)&test_cases[0], 1);
}
