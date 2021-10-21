/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:06:00 by wrolanda          #+#    #+#             */
/*   Updated: 2021/10/19 21:01:55 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Substr возвращает часть строки s, специфицированную параметрами start и len.*/
static char	*ft_malres(size_t len, char const *s)
{
	char	*res1;

	if (len > ft_strlen(s))
		res1 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
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
	res = ft_malres(len, s);
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

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
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
#include <stdio.h>
int	main(void)
{
	char	*s2 = ft_substr("abcdef", -1, 4);
	printf("%s \n\n", s2);
	free(s2);
}*/
