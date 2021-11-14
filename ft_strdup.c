/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:32:33 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/13 17:47:26 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strdup -- save a copy of a string
DESCRIPTION
	The strdup() function allocates sufficient memory 
	for a copy of the string s1, does the copy, and returns 
	a pointer to it.  The pointer may subsequently be
	used as an argument to the function free(3).*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *) malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, ft_strlen(s1) + 1);
	return ((char *)s2);
}
