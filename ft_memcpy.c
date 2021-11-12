/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:23:29 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 19:38:49 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*memcpy -- copy memory area
DESCRIPTION
	The memcpy() function copies n bytes from memory area src to memory area
	dst.  If dst and src overlap, behavior is undefined.  Applications in
	which dst and src might overlap should use memmove(3) instead.*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst1;
	const unsigned char	*src1;

	dst1 = dst;
	src1 = src;
	i = 0;
	if (dst == (char *)0 && src == (char *)0)
		return (dst);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned char	memecpy11[12] = "Hello World";
	unsigned char	memecpy12[13] = "FTY";
	unsigned char	memecpy13[13] = "FTY";

	unsigned char	memecpy21[11] = "1234567890";
	unsigned char	memecpy22[11] = "rtytkjhgef";
	unsigned char	memecpy23[11] = "rtytkjhgef";

	printf("memcpy – копирование непересекающихся массивов\n");
	printf("STR	['%s']\n", memecpy11);
	memcpy(memecpy12, memecpy11, 11);
	printf("ORIG	['%s']\n", memecpy12);
	ft_memcpy(memecpy13, memecpy11, 11);
	printf("NEORIG	['%s']\n\n", memecpy13);

	printf("STR	['%s']\n", memecpy21);
	memcpy(memecpy22, memecpy21, 5);
	printf("ORIG	['%s']\n", memecpy22);
	ft_memcpy(memecpy23, memecpy21, 5);
	printf("NEORIG	['%s']\n\n", memecpy23);
// массив int

	int	memecpy31[] = {1, 2, 3, 4, 5};
	int	memecpy32[] = {2, 3, 4, 5, 6};
	int	memecpy33[] = {2, 3, 4, 5, 6};
	int z = 0;
	printf("STR =	");
	while (z < 5)
	{
		printf("%d, ", memecpy31[z]);
		z++;
	}
	printf("\n");
	memcpy(memecpy32, memecpy31, 2);
	printf("ORIG =	");
	z = 0;
	while (z < 5)
	{
		printf("%d, ", memecpy32[z]);
		z++;
	}
	printf("\n");

	ft_memcpy(memecpy33, memecpy31, 2);
	printf("NEORIG =");
	z = 0;
	while (z < 5)
	{
		printf("%d, ", memecpy33[z]);
		z++;
	}
	printf("\n");
}*/
