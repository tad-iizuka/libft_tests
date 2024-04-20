/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 21:44:26 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 21:46:09 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_putstr_fd"

static const char test_cases[] = {
	'[',
	'0',
	'1',
	']',
	'\0'
};

void t_ft_putstr_fd() {
	printf("\x1b[33m%s\x1b[32m\n", TEST_NAME);
	ft_putstr_fd((char *)&test_cases[0], 1);
}
