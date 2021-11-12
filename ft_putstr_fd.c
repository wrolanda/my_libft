/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:46:28 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:40:50 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION 
Outputs the string ’s’ to the given file
descriptor.

PARAMETERS
#1. The string to output.
#2. The file descriptor on which to write.
*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return ;
	while (i < ft_strlen(s))
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*int	main(void)
{
	int	i1 = 0;
	//int	i2 = 0;
	char	*res;
	
	while (i1++ < 10)
	{
		res = ft_itoa(i1);
		write (1, &res[0], 1);
	}
}*/
