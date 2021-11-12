/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:17:28 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/11 17:08:55 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION 
Outputs the integer ’n’ to the given file
descriptor.

PARAMETERS
#1. The integer to output.
#2. The file descriptor on which to write.
*/
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{	
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			n = -147483648;
		}
		n = -n;
	}
	if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

/*int	main(void)
{
	int	i =  2147483647;
	ft_putnbr_fd(i,1);	
}*/
