/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:28 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:40:03 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*memmove -- copy byte string.
DESCRIPTION
	The memmove() function copies len bytes from string src to string dst.
	The two strings may overlap; the copy is always done in a non-destructive
	manner.*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst1;
	const unsigned char	*src1;

	dst1 = dst;
	src1 = src;
	if (len == 0 || dst == src)
		return (dst);
	if (src > dst)
	{
		dst1 = ft_memcpy(dst1, src1, len);
		return (dst);
	}
	else
	{
		dst1 = dst1 + len - 1;
		src1 = src1 + len - 1;
		while (len--)
			*dst1-- = *src1--;
	}
	return (dst);
}
