/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:48:34 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:42:26 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strstr, strcasestr, strnstr -- locate a substring in a string
DESCRIPTION
	The strnstr() function locates the first occurrence of the null-termi-
	nated string needle in the string haystack, where not more than len char-
	acters are searched.  Characters that appear after a `\0' character are
	not searched.  Since the strnstr() function is a FreeBSD specific API, it
	should only be used when portability is not a concern.
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		k;
	char	*res;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while ((haystack[i]) && (i < len))
	{
		if (haystack[i] == needle[0])
		{
			k = 0;
			while (needle[k] && haystack[i + k] && \
			haystack[i + k] == needle[k] && ((i + k) < len))
				k++;
			if (needle[k] == '\0')
			{
				res = (char *)(haystack + i);
				return (res);
			}
		}
		i++;
	}
	return ((char *)0);
}

/*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		k;
	char	*res;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0 || ft_strlen(needle) == 0)
		len++;
	if (ft_strlen(haystack) < ft_strlen(needle))
		return ((char *)0);
	while ((haystack[i]) && i < len)
	{
		k = 0;
		while (needle[k] == haystack[i] && needle[k] != '\0' && i < len)
		{
			k++;
			i++;
		}
		if (needle[k] == '\0')
		{
			res = (char *)(haystack + (i - ft_strlen(needle)));
			return (res);
		}
		i++;
	}
	return ((char *)0);
}*/

/*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		k;
	char	*res;

	i = 0;
	k = 0;
	while ((haystack[i]) && i < len)
	{
		while (needle[k] == haystack[i])
		{
			k++;
			i++;
		}
		if (needle[k] == '\0')
			break ;
		i++;
		k = 0;
	}
	res = (char *)(haystack + (i - ft_strlen(needle)));
	return (res);
}*/

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
   // Сравниваемые строки
	char *s1 = "lorem ipsum dolor sit amet";
	char *s2 = "dolor";
	size_t size = 15;
	printf ("size s2 = %zu; \n", size);

   	char 	*i1 = strnstr(s1, s2, size);
	char	*i2 = ft_strnstr(s1, s2, size);
	printf ("orig = %s; \n", i1);
	printf ("my = %s; ", i2);
}*/
