/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:19:16 by wrolanda          #+#    #+#             */
/*   Updated: 2021/10/18 21:17:51 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*strrchr – поиск последнего вхождения символа в строку*/
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

/*strrchr – поиск последнего вхождения символа в строку*/
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

/*#include <stdio.h>  // Для printf
int main (void)
{
   // Массив со строкой для поиска
   char str [11] = "123456780\0";
   // Код искомого символа
   int ch = '\0';
   // Указатель на искомую переменную в строке,
   // по которой осуществляется поиск.
   char *ach;
  
   // Ищем символ ‘6’
   ach=ft_strrchr(str, ch);

   // Выводим результат на консоль
   if (ach==NULL)
      printf ("Символ в строке не найден\n");
   else
      printf ("Искомый символ есть");

   return 0;
}*/