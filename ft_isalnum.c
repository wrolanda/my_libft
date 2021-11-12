/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:56:21 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/12 22:28:58 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c)) || (ft_isdigit(c)))
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	char	e;
	char	f;
	char	g;

	a = '1';
	b = '5';
	c = '9';
	d = 'Z';
	e = 'm';
	f = 'f';
	g = '>';
	printf("orig[%c] = %d;\n", a, isalnum(a));
	printf("neorig[%c] = %d;\n\n", a, ft_isalnum(a));
	printf("orig[%c] = %d;\n", b, isalnum(b));
	printf("neorig[%c] = %d;\n\n", b, ft_isalnum(b));
	printf("orig[%c] = %d;\n", c, isalnum(c));
	printf("neorig[%c] = %d;\n\n", c, ft_isalnum(c));
	printf("orig[%c] = %d;\n", d, isalnum(d));
	printf("neorig[%c] = %d;\n\n", d, ft_isalnum(d));
	printf("orig[%c] = %d;\n", e, isalnum(e));
	printf("neorig[%c] = %d;\n\n", e, ft_isalnum(e));
	printf("orig[%c] = %d;\n", f, isalnum(f));
	printf("neorig[%c] = %d;\n\n", f, ft_isalnum(f));
	printf("orig[%c] = %d;\n", g, isalnum(g));
	printf("neorig[%c] = %d;\n\n", g, ft_isalnum(g));
}*/
