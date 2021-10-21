/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:28:10 by wrolanda          #+#    #+#             */
/*   Updated: 2021/10/05 16:50:00 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
	c = 'A';
	d = 'Z';
	e = 'm';
	f = '1';
	g = '>';
	printf("orig[%c] = %d;\n", a, isalpha(a));
	printf("neorig[%c] = %d;\n\n", a, ft_isalpha(a));
	printf("orig[%c] = %d;\n", b, isalpha(b));
	printf("neorig[%c] = %d;\n\n", b, ft_isalpha(b));
	printf("orig[%c] = %d;\n", c, isalpha(c));
	printf("neorig[%c] = %d;\n\n", c, ft_isalpha(c));
	printf("orig[%c] = %d;\n", d, isalpha(d));
	printf("neorig[%c] = %d;\n\n", d, ft_isalpha(d));
	printf("orig[%c] = %d;\n", e, isalpha(e));
	printf("neorig[%c] = %d;\n\n", e, ft_isalpha(e));
	printf("orig[%c] = %d;\n", f, isalpha(f));
	printf("neorig[%c] = %d;\n\n", f, ft_isalpha(f));
	printf("orig[%c] = %d;\n", g, isalpha(g));
	printf("neorig[%c] = %d;\n\n", g, ft_isalpha(g));
}*/
