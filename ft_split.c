/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:45:30 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/09 15:55:11 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
/*Parameters 
#1. The string to be split.
#2. The delimiter character.

Return value 
The array of new strings resulting from the split.
NULL if the allocation fails.

External functs. malloc, free

Description 
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must be
ended by a NULL pointer.*/

static int	ft_words_count(char const *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			k++;
		}
	}
	return (k);
}

static int	ft_word_len(char const *s, char c, int i)
{
	int	k;

	k = 0;
	if (s[i] != c && s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			k++;
		}
	}
	return (k);
}

static void	ft_frees(char **res, int k)
{
	while (k >= 0)
	{
		free(res[k]);
		k--;
	}
	free(res);
}

/*static void	ft_wordprint(char **res, char const *s, char c, int i, int q)
{
	int	len_word;
	int	k;

	len_word = ft_word_len(s, c, i);
	res[q] = (char *)malloc(sizeof(char) * (len_word + 1));
	if (res[q] == NULL)
	{
		ft_frees (res, q);
		return (NULL);
	}
	k = 0;
	while (s[i] != c && s[i] != '\0')
	{
		res[q][k] = s[i];
		i++;
		k++;
	}
	res [q][k] = '\0';
	q++;
}*/

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		k;
	int		q;
	int		len_word;

	i = 0;
	q = 0;
	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (ft_words_count(s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			len_word = ft_word_len(s, c, i);
			res[q] = (char *)malloc(sizeof(char) * (len_word + 1));
			if (res[q] == NULL)
			{
				ft_frees (res, q);
				return (NULL);
			}
			k = 0;
			while (s[i] != c && s[i] != '\0')
			{
				res[q][k] = s[i];
				i++;
				k++;
			}
			res [q][k] = '\0';
			q++;
		}
	}
	res[q] = NULL;
	return (res);
}
// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	int i = 0;
// 	char	c = '|';
// 	char	*str = "split  ||this|for|me|||||!|";
// 	int		k = ft_words_count(str, c);
// 	printf("кол-во слов = %d;\n\n\n", k);
// 	char	**res = ft_split(str, c);
// 	//while (res[i])
// 	for (int i = 0; i < (ft_words_count(str, c) + 1); i++)
// 	{
// 		printf("res [%d] = (%s)\n", i, res[i]);
// 	}
// 	//i = ft_words_count(str, c);
// 	//printf("res [%d] = %s\n", i, res[i]);
// 	return (0);
// }