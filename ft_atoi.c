/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:37:30 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:35:24 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*atoi, atoi_l -- convert ASCII string to integer
DESCRIPTION
	The atoi() function converts the initial portion of the string pointed to
	by str to int representation.
*/
#include "libft.h"

static int	ft_sign(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' \
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	int			i;
	long int	result;

	result = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' \
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			if (result * ft_sign(str) > 2147483647)
				return (-1);
			if (result * ft_sign(str) < -2147483648)
				return (0);
			i++;
		}
		return (result * ft_sign(str));
	}
	return (0);
}

/*int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	result;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' \
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		return (result * sign);
	}
	return (0);
}*/

/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *s = " -3455678976543423 sf";
	printf("orig =	%d\n", atoi(s));
	printf("my = 	%d\n\n", ft_atoi(s));
	
}*/
