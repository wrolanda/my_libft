/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:54:59 by wrolanda          #+#    #+#             */
/*   Updated: 2021/10/05 19:48:39 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned char	c11[12] = "Hello World";
	unsigned char	c12[12] = "Hello World";

	unsigned char	c21[11] = "1234567890";
	unsigned char	c22[11] = "1234567890";

	printf("STR	['%s']\n", c11);
	bzero(c11, 11);
	printf("ORIG	['%s']\n", c11);
	ft_bzero(c12, 11);
	printf("NEORIG	['%s']\n\n", c12);

	printf("STR	['%s']\n", c21);
	bzero(c21, 5);
	printf("ORIG	['%s']\n", c21);
	ft_bzero(c22, 5);
	printf("NEORIG	['%s']\n\n", c22);
// массив int

	int	c31[] = {1, 2, 3, 4, 5};
	int	c32[] = {1, 2, 3, 4, 5};
	int i = 0;
	while (i < 5)
	{
		printf("%d, ", c31[i]);
		i++;
	}
	printf("\n\n");
	bzero(c31, 2);
	printf("ORIG =	");
	i = 0;
	while (i < 5)
	{
		printf("%d, ", c31[i]);
		i++;
	}
	printf("\n");

	ft_bzero(c32, 2);
	printf("NEORIG =");
	i = 0;
	while (i < 5)
	{
		printf("%d, ", c32[i]);
		i++;
	}
	printf("\n");
}*/
