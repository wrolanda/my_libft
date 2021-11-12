/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:02:32 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:39:44 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memchr -- locate byte in byte string
DESCRIPTION
	The memchr() function locates the first occurrence of c (converted to an
	unsigned char) in string s.
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s) == (unsigned char)c)
			return ((unsigned char *)s);
		i++;
		s++;
	}
	return ((char *)0);
}

/*void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	while ((s1[i] != '\0') && (s1[i] != c) && i < n)
		i++;
	if (s1[i] == c)
		return ((unsigned char *)s1);
	return ((char *)0);
}*/

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *src = "bonjourno";
	int size = 2;
	char	*s1 = ft_memchr (src, 'n', size);
	char	*s2 = memchr (src, 'n', size);
	printf("|%s|\n", s1);
	printf("|%s|\n\n", s2);
}*/