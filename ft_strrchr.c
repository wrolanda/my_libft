/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:19:16 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:42:38 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The strrchr() function is identical to strchr(), except it locates the
	last occurrence of c.*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*last_s;

	last_s = (char *)0;
	while (*s != '\0')
	{
		if (*s == (char) c)
			last_s = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last_s);
}

/*char	*ft_strrchr(const char *s, int c)
{
	long int	i;

	i = ft_strlen(s);
	s = s + i;
	while (i >= 0 && *s != c)
	{
		i--;
		s--;
	}
	if (*s == c)
		return ((char *) s);
	return ((char *) 0);
}*/

/*#include <stdio.h>
int main (void)
{
   char str [11] = "123456780\0";
   int ch = '\0';
   char *ach;
  
   ach=ft_strrchr(str, ch);

   if (ach==NULL)
      printf ("symbol not found\n");
   else
      printf ("symbol found");

   return 0;
}*/