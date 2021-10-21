/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:31:51 by wrolanda          #+#    #+#             */
/*   Updated: 2021/10/05 16:50:05 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	g = 25;
	printf("orig[%c] = %d;\n", a, isprint(a));
	printf("neorig[%c] = %d;\n\n", a, ft_isprint(a));
	printf("orig[%c] = %d;\n", b, isprint(b));
	printf("neorig[%c] = %d;\n\n", b, ft_isprint(b));
	printf("orig[%c] = %d;\n", c, isprint(c));
	printf("neorig[%c] = %d;\n\n", c, ft_isprint(c));
	printf("orig[%c] = %d;\n", d, isprint(d));
	printf("neorig[%c] = %d;\n\n", d, ft_isprint(d));
	printf("orig[%c] = %d;\n", e, isprint(e));
	printf("neorig[%c] = %d;\n\n", e, ft_isprint(e));
	printf("orig[%c] = %d;\n", f, isprint(f));
	printf("neorig[%c] = %d;\n\n", f, ft_isprint(f));
	printf("orig[%c] = %d;\n", g, isprint(g));
	printf("neorig[%c] = %d;\n\n", g, ft_isprint(g));
}*/
