/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:05:02 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:42:19 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strcmp, strncmp -- compare strings
DESCRIPTION
	The strcmp() and strncmp() functions lexicographically compare the null-
	terminated strings s1 and s2.

	The strncmp() function compares not more than n characters.  Because
	strncmp() is designed for comparing strings rather than binary data,
	characters that appear after a `\0' character are not compared.*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h> 
int main (void)
{
   // Сравниваемые строки
	char *str1 = "abcdef";
	char *str2 = "abcdefghijklmnop";
  
   // Сравниваем первые пять символов двух строк
   int i = ft_strncmp (str1, str2, 6);
   printf ("%d; ", i);
}
*/