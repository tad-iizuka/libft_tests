/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ft_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:13:54 by tiizuka           #+#    #+#             */
/*   Updated: 2024/04/01 20:35:53 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"t_ft.h"

#define TEST_NAME "ft_strnstr"

static const char haystack[] = "Foo Bar Baz";

void t_ft_strnstr() {
	printf("\x1b[33m%s\n", TEST_NAME);
	verify(!memcmp(ft_strnstr(&haystack[0], "Foo", sizeof(haystack)), &haystack[0], 3), 1);
	verify(!memcmp(ft_strnstr(&haystack[0], "Baz", sizeof(haystack)), &haystack[8], 3), 2);
	verify(ft_strnstr(&haystack[0], "Foo", 2) == NULL, 3);
	verify(ft_strnstr(&haystack[0], "Zoo", sizeof(haystack)) == NULL, 4);
}
