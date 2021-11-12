/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:57:29 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:39:53 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*memcmp -- compare byte string
DESCRIPTION
	The memcmp() function compares byte string s1 against byte string s2.
	Both strings are assumed to be n bytes long.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s12;

	s11 = (unsigned char *)s1;
	s12 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s11[i] != s12[i])
			return ((unsigned char)s11[i] - (unsigned char)s12[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h> 

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s12;

	s11 = (unsigned char *)s1;
	s12 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((s11[i] || s12[i]) && i < n)
	{
		printf ("s1[%zu] = %d\n", i, (int)s11[i]);
		printf ("s2[%zu] = %d\n\n", i, (int)s12[i]);
		printf ("s1 - s2 = %d\n", (int)s11[i] - (int)s12[i]);
		if (s11[i] != s12[i])
			return ((unsigned char)s11[i] - (unsigned char)s12[i]);
		i++;
	}
	return (0);
}*/

/*int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((*(unsigned char *)s1) || (*(unsigned char *)s2)) && i < n)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s1);
		i++;
		s1++;
		s2++;
	}
	return (0);
}*/

/*#include <string.h>
#include <stdio.h> 

int	main(void)
{
   // Сравниваемые строки
	char *s1 = "atoms\0\0\0\0";
	char *s2 = "atoms\0abc";
	size_t size = 8;

   	int i1 = memcmp(s1, s2, size);
	int i2 = ft_memcmp(s1, s2, size);
	printf ("orig = %d; \n", i1);
	printf ("my = %d; ", i2);
}*/
