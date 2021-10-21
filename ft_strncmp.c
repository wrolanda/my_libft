/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:05:02 by wrolanda          #+#    #+#             */
/*   Updated: 2021/10/13 19:01:23 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*strncmp – сравнение строк с ограничением количества сравниваемых символов.*/
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