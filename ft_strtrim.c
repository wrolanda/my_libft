/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 02:06:20 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/11 19:13:34 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.

PARAMETERS
#1. The string to be trimmed.
#2. The reference set of characters to trim.
*/
#include "libft.h"

static int	ft_begin_trim(char const *s1, char const *set)
{
	int	i;
	int	q;

	i = 0;
	q = 0;
	while (set[q] && s1[i])
	{
		if (s1[i] == set[q])
		{
			i++;
			q = 0;
		}
		else
			q++;
	}
	return (i);
}

static int	ft_end_trim(char const *s1, char const *set)
{
	int	i;
	int	q;
	int	k;

	i = 0;
	q = 0;
	k = 0;
	while (s1[i])
		i++;
	i--;
	while (set[q] && i >= 0)
	{
		if (s1[i] == set[q])
		{
			i--;
			k++;
			q = 0;
		}
		else
			q++;
	}
	return (++i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_trim;
	int		i;
	char	*res;
	int		count;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	i = 0;
	start_trim = ft_begin_trim(s1, set);
	if (start_trim > ft_end_trim(s1, set))
		start_trim = 0;
	count = ft_end_trim(s1, set) - start_trim;
	res = malloc(sizeof(char) * ((ft_end_trim(s1, set) - start_trim) + 1));
	if (res == NULL)
		return (NULL);
	while (i < count)
	{
		res[i] = s1[start_trim];
		i++;
		start_trim++;
	}
	res[i] = '\0';
	return (res);
}

/*last version
#include "libft.h"

static int	ft_begin_trim(char const *s1, char const *set)
{
	int	i;
	int	q;

	i = 0;
	q = 0;
	while (set[q])
	{
		if (s1[i] == set[q])
		{
			//printf("s1[%d](%c) == set[%d](%c);\n", \
			i, s1[i], q, set[q]);
			i++;
			q = 0;
		}
		else
			q++;
	}
	//printf ("символов в начале = %d;\n", i);
	return (i);
}

static int	ft_end_trim(char const *s1, char const *set)
{
	int	i;
	int	q;
	int	k;

	i = 0;
	q = 0;
	k = 0;
	while (s1[i])
		i++;
	i--;
	while (set[q])
	{
		if (s1[i] == set[q])
		{
			//printf("\ns1[%d](%c) == set[%d](%c);\n", i, s1[i], q, set[q]);
			i--;
			k++;
			q = 0;
		}
		else
			q++;
	}
	return (++i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_trim;
	int		end_trim;
	int		i;
	char	*res;
	int		count;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	i = 0;
	start_trim = ft_begin_trim(s1, set);
	end_trim = ft_end_trim(s1, set);
	if (start_trim > end_trim)
		start_trim = 0;
	count = end_trim - start_trim;
	//printf("сколько выделить ячеек = %d;\n\n", end_trim - start_trim);
	res = malloc(sizeof(char) * ((end_trim - start_trim) + 1));
	if (res == NULL)
		return (NULL);
	while (i < count)
	{
		//printf("i = %d; res = %d;\n", i, end_trim - start_trim);
		res[i] = s1[start_trim];
		//printf("res[%d] = %c; s1[%d] = %c;\n", i, res[i], \
		start_trim, s1[start_trim]);
		i++;
		start_trim++;
	}
	res[i] = '\0';
	return (res);
}*/
/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	char	*s1 = "eqjwweqeqwq";
	char	*set = "eqjw";
	char	*res = ft_strtrim(s1, set);
	
	int begin_trim = ft_begin_trim(s1, set);
	int end_trim = ft_end_trim(s1, set);
	
	printf ("\nstart symb = %d\n", begin_trim);
	printf ("end symb = %d", end_trim);
	printf ("\n\nres str = (%s);\n", res);
	return 0;
}*/

/*#include "libft.h"
#include <stdio.h>

static int	ft_begin_trim(char const *s1, char const *set)
{
	int	i;
	int	q;

	i = 0;
	q = 0;
	while (set[q])
	{
		if (s1[i] == set[q])
		{
			//printf("s1[%d](%c) == set[%d](%c);\n", i, s1[i], q, set[q]);
			i++;
			q = 0;
		}
		else
			q++;
	}
	//printf ("символов в начале = %d;\n", i);
	return (i);
}

static int	ft_end_trim(char const *s1, char const *set)
{
	int	i;
	int	q;
	int	k;

	i = 0;
	q = 0;
	k = 0;
	while (s1[i])
		i++;
	i--;
	while (set[q])
	{
		if (s1[i] == set[q])
		{
			//printf("\ns1[%d](%c) == set[%d](%c);\n", i, s1[i], q, set[q]);
			i--;
			k++;
			q = 0;
		}
		else
			q++;
	}
	return (++i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_trim;
	int		end_trim;
	int		i;
	char	*res;
	int		count;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	i = 0;
	start_trim = ft_begin_trim(s1, set);
	end_trim = ft_end_trim(s1, set);
	if (start_trim > end_trim)
		start_trim = 0;
	count = end_trim - start_trim;
	//printf("сколько выделить ячеек = %d;\n\n", end_trim - start_trim);
	res = malloc(sizeof(char) * ((end_trim - start_trim) + 1));
	if (res == NULL)
		return (NULL);
	while (i < count)
	{
		//printf("i = %d; res = %d;\n", i, end_trim - start_trim);
		res[i] = s1[start_trim];
		//printf("res[%d] = %c; s1[%d] = %c;\n", i, res[i], \
		start_trim, s1[start_trim]);
		i++;
		start_trim++;
	}
	res[i] = '\0';
	return (res);
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	char	*s1 = "eqjwweqeqwq";
	char	*set = "eqjw";
	char	*res = ft_strtrim(s1, set);
	
	int begin_trim = ft_begin_trim(s1, set);
	int end_trim = ft_end_trim(s1, set);
	
	printf ("\nstart symb = %d\n", begin_trim);
	printf ("end symb = %d", end_trim);
	printf ("\n\nres str = (%s);\n", res);
	return 0;
}*/