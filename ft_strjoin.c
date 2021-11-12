/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:50:16 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:41:35 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.

PARAMETERS
#1. The prefix string.
#2. The suffix string.
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	newstr = ft_calloc(sizeof(char), i + 1);
	if (newstr == NULL)
		return (NULL);
	j = ft_strlcat(newstr, s1, i + 1) + ft_strlcat(newstr, s2, i + 1);
	return (newstr);
}
