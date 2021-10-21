/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:49:47 by wrolanda          #+#    #+#             */
/*   Updated: 2021/10/19 15:57:25 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*strchr – поиск первого вхождения символа в строку*/
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)0);
}

/*#include <stdio.h>  // Для printf
#include <string.h>
int main (void)
{
   char s[] = "tripouille";
   char *s2 = ft_strchr(s, 't' + 256);
   char *s1 = strchr(s, 't' + 256);
  
  printf("orig = %d; \n", 't' + 256);
   printf("orig = %s; \n", s1);
   printf("my = %s; \n\n", s2);


   return 0;
}*/