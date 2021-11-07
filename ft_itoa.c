/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda < wrolanda@student.21-school.r    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 01:16:49 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/02 22:06:15 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countnbr(long int n)
{
	int			k;

	k = 0;
	if (n <= 0)
		k++;
	while (n != 0)
	{
		n /= 10;
		k++;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	int			k;
	long int	n1;
	char		*res;

	n1 = n;
	k = ft_countnbr(n1);
	res = malloc(sizeof(char) * (k + 1));
	if (res == NULL)
		return (NULL);
	if (n1 < 0)
	{
		res[0] = '-';
		n1 = -n1;
	}
	res[k] = '\0';
	if (n1 == 0)
		res[0] = '0';
	while (n1 != 0 || k > 1)
	{
		k--;
		res[k] = n1 % 10 + '0';
		n1 /= 10;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	int i = 1234;
	char *z = ft_itoa(i);
	printf("\nres = (%s)", z);
	free(z);
	return (0);
}*/

/*#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int			k;
	long int	n1;
	char		*res;

	k = 0;
	n1 = n;
	if (n <= 0)
		k++;
	while (n != 0)
	{
		n /= 10;
		k++;
	}
	printf("кол-во символов числа = %d\n", k);
	res = malloc(sizeof(char) * (k + 1));
	if (res == NULL)
		return (NULL);
	if (n1 < 0)
	{
		res[0] = '-';
		n1 = -n1;
	}
	res[k] = '\0';
	if (n1 == 0)
		res[0] = '0';
	while (n1 != 0 || k > 1)
	{
		k--;
		res[k] = n1 % 10 + '0';
		printf ("res[%d] = %c;\n", k, res[k]);
		n1 /= 10;
	}
	return (res);
}

int	main(void)
{
	int i = -0;
	printf("%d\n", i);
	char *z = ft_itoa(i);
	printf("\nres = (%s)", z);
	
	return (0);
}*/