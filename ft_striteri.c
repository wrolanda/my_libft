/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:16:05 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/08 18:34:22 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	k;

	k = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[k])
	{
		(*f)(k, &s[k]);
		k++;
	}
}

/*#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	k;

	k = 0;
	if (s == NULL || f == NULL)
		return ;
	while (k < (int)ft_strlen(s))
	{
		(*f)(k, s);
		k++;
	}
}*/

/*void	ft_iter(unsigned int i, char *s)
{
	s[i] += 1;
}

#include <stdio.h>
int	main(void)
{
	int i = 0;
	void (*f)(unsigned int i, char *s) = ft_iter;
	char *str = "abcde";
	ft_striteri(str,(*f));
	printf ("\nres = (%s)\n", str);
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (0);
}*/
