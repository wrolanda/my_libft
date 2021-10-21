/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:10:19 by wrolanda          #+#    #+#             */
/*   Updated: 2021/10/18 20:47:56 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Функция strlcpy копирует из строки src в буфер dst не более чем size - 1 
символов и гарантированно устанавливает в конец строки нулевой символ.
strlcpy возвращает размер строки по адресу src*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (dstsize <= 0)
		return (res);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (res);
}
