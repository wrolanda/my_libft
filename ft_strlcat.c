/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:58:01 by wrolanda          #+#    #+#             */
/*   Updated: 2021/10/19 16:21:28 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*strlcat делает то же самое (копирует из строки src в буфер dst 
не более чем size - 1 символов и гарантированно устанавливает в 
конец строки нулевой символ.), однако копирование ведётся не в начало 
dst, а таким образом, чтобы продолжить строку, на которую указывает dst*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res_dst;
	size_t	res_src;

	i = 0;
	res_dst = ft_strlen(dst);
	res_src = ft_strlen(src);
	j = res_dst;
	if (dstsize <= 0)
		return (res_src + dstsize);
	while (src[i] && j < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	if (dstsize < res_dst)
		return (res_src + dstsize);
	else
		return (res_dst + res_src);
}

/*#include <string.h>
#include <stdio.h> 

int main(void)
{
	char  dst[20] ="sdfsdf";   
	const char *src = "qwerty qwerty";
   size_t sz;
                 // избыточная инициализация для отладочной печати

   printf("строка: \"%s\"\n\n", src);
   printf("буфер перед копированием: \"%s\"\n", dst);

   sz = ft_strlcat(dst, src, sizeof(dst));    
   if (sz >= sizeof(dst))      
      printf("обнаружено усечение строки с %zu до %lu символов !\n",\
	   sz, sizeof(dst)-1);

   printf("буфер после копирования:  \"%s\"\n", dst);

   return 0;
}*/
