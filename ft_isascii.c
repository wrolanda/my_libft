/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:19:40 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/12 22:29:37 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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

	a = 'a';
	b = 'z';
	c = -57;
	d = 'A';
	e = '>';
	f = '1';
	g = -1;
	printf("orig[%c] = %d;\n", a, isascii(a));
	printf("neorig[%c] = %d;\n\n", a, ft_isascii(a));
	printf("orig[%c] = %d;\n", b, isascii(b));
	printf("neorig[%c] = %d;\n\n", b, ft_isascii(b));
	printf("orig[%c] = %d;\n", c, isascii(c));
	printf("neorig[%c] = %d;\n\n", c, ft_isascii(c));
	printf("orig[%c] = %d;\n", d, isascii(d));
	printf("neorig[%c] = %d;\n\n", d, ft_isascii(d));
	printf("orig[%c] = %d;\n", e, isascii(e));
	printf("neorig[%c] = %d;\n\n", e, ft_isascii(e));
	printf("orig[%c] = %d;\n", f, isascii(f));
	printf("neorig[%c] = %d;\n\n", f, ft_isascii(f));
	printf("orig[%c] = %d;\n", g, isascii(g));
	printf("neorig[%c] = %d;\n\n", g, ft_isascii(g));
}*/