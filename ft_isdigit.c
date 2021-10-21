/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:42:29 by wrolanda          #+#    #+#             */
/*   Updated: 2021/10/05 16:50:03 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	printf("orig[%c] = %d;\n", a, isdigit(a));
	printf("neorig[%c] = %d;\n\n", a, ft_isdigit(a));
	printf("orig[%c] = %d;\n", b, isdigit(b));
	printf("neorig[%c] = %d;\n\n", b, ft_isdigit(b));
	printf("orig[%c] = %d;\n", c, isdigit(c));
	printf("neorig[%c] = %d;\n\n", c, ft_isdigit(c));
	printf("orig[%c] = %d;\n", d, isdigit(d));
	printf("neorig[%c] = %d;\n\n", d, ft_isdigit(d));
	printf("orig[%c] = %d;\n", e, isdigit(e));
	printf("neorig[%c] = %d;\n\n", e, ft_isdigit(e));
	printf("orig[%c] = %d;\n", f, isdigit(f));
	printf("neorig[%c] = %d;\n\n", f, ft_isdigit(f));
	printf("orig[%c] = %d;\n", g, isdigit(g));
	printf("neorig[%c] = %d;\n\n", g, ft_isdigit(g));
}*/