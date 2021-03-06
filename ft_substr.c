/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:28:11 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/13 21:42:12 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.

PARAMETERS
#1. The string from which to create the substring.
#2. The start index of the substring in the string ’s’.
#3. The maximum length of the substring.
*/
#include "libft.h"

static char	*ft_malres(size_t len, char const *s, unsigned int start)
{
	char	*res1;
	size_t	n;

	n = ft_strlen(s) - start;
	if (((unsigned int)len + start) > ft_strlen(s))
		res1 = (char *)malloc(sizeof(char) * n + 1);
	else
		res1 = (char *)malloc(sizeof(char) * len + 1);
	return (res1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		res = (char *)malloc(sizeof(char));
		if (res == NULL)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	res = ft_malres(len, s, start);
	if (res == NULL)
		return (NULL);
	while (i < len && (s[i + start]))
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*char	*ft_(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		res = (char *)malloc(sizeof(char));
		if (res == NULL)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	else
	{
		if (start + len > ft_strlen(s))
			len = ft_strlen(s) - start;
		res = (char *)malloc(sizeof(char) * len + 1);
		if (res == NULL)
			return (NULL);
		i = 0;
		while (++i - 1 < len)
			*(res + i - 1) = *(s + start - 1);
		*(res + i - 1) = '\0';
		return (res);
	}
}*/
/*#include <stdio.h>
int	main(void)
{
	char	*s2 = ft_substr("0123456789", 1, 9);
	printf("(%s)\n", s2);
	free(s2);
}*/
