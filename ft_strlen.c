/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:42:43 by wrolanda          #+#    #+#             */
/*   Updated: 2021/10/06 19:17:31 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	*c1 = "Hello World!";
	const char	*c2 = "";
	const char	*c3 = "sd gh e43 5";
	const char	*c4 = "s";

	size_t	i1 =	strlen		(c1); 
	size_t	i2 =	ft_strlen	(c1);

	size_t	k1 =	strlen		(c2);
	size_t	k2 =	ft_strlen	(c2);

	size_t	l1 =	strlen		(c3);
	size_t	l2 =	ft_strlen	(c3);

	size_t	m1 =	strlen		(c4);
	size_t	m2 =	ft_strlen	(c4);

	printf("ORIG	['%s'] = %zu\n", c1, i1);
	printf("NEORIG	['%s'] = %zu\n\n", c1, i2);

	printf("ORIG	['%s'] = %zu\n", c2, k1);
	printf("NEORIG	['%s'] = %zu\n\n", c2, k2);

	printf("ORIG	['%s'] = %zu\n", c3, l1);
	printf("NEORIG	['%s'] = %zu\n\n", c3, l2);

	printf("ORIG	['%s'] = %zu\n", c4, m1);
	printf("NEORIG	['%s'] = %zu\n\n", c4, m2);
}*/