/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:58:01 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/13 17:48:53 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strlcpy, strlcat -- size-bounded string copying and concatenation
DESCRIPTION
	strlcat() appends string src to the end of dst.  It will append at most
	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
	dstsize is 0 or the original dst string was longer than dstsize (in prac-
	tice this should not happen as it means that either dstsize is incorrect
	or that dst is not a proper string).*/
#include "libft.h"

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
	if (dstsize != 0 && res_dst <= dstsize)
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

   printf("str: \"%s\"\n\n", src);
   printf("buff pered copy: \"%s\"\n", dst);

   sz = ft_strlcat(dst, src, sizeof(dst));    
   if (sz >= sizeof(dst))      
      printf("usechenie str with %zu to %lu symbols !\n",\
	   sz, sizeof(dst)-1);

   printf("buff posle copy:  \"%s\"\n", dst);

   return 0;
}*/
