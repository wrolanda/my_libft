/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:42:44 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 16:57:05 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
DESCRIPTION 
Outputs the character ’c’ to the given file
descriptor.

PARAMETERS
#1. The character to output.
#2. The file descriptor on which to write.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
