/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:35:23 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 16:55:42 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
DESCRIPTION 
Applies the function ’f’ to each character of
the string ’s’ , and passing its index as first
argument to create a new string (with malloc(3))
resulting from successive applications of ’f’.

PARAMETERS
#1. The string on which to iterate.
#2. The function to apply to each character.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (i < (int)ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	ft_iter(unsigned int i, char c)
{
	(void)i;
	c += 1;
	return (c);
}

#include <stdio.h>
int main()
{
	int k = 0;
	char (*f)(unsigned int i, char c) = ft_iter;
	char *str = "abcde";
	char *res = ft_strmapi(str,f);
	printf ("res = (%s)\n", res);

	while (res[k])
	{
		write (1, &res[k], 1);
		k++;
	}
	return (0);
}*/

/*#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (i < (int)ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	ft_iter(unsigned int i, char c)
{
	(void)i;
	c += 1;
	return (c);
}

#include <stdio.h>
int main()
{
	int		k = 0;
	int		i = 1;
	char	(*f)(unsigned int i, char c);
	char	*str = "abcde";
	f = ft_iter(i, str[i - 1]);
	char	*res = ft_strmapi(str,(*f));
	printf ("\nres = (%s)\n", res);

	while (res[k])
	{
		write (1, &res[k], 1);
		k++;
	}
	free(res);
	return 0;
}*/