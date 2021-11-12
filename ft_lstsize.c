/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:12:06 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:39:35 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
Counts the number of elements in a list.
PARAMETERS
#1. The beginning of the list.*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	t_list	*l;
	int		actual;
	int		expected;

	l = ft_lstnew(ft_strdup("1"));
	l->next = ft_lstnew(ft_strdup("2"));
	l->next->next = ft_lstnew(ft_strdup("3"));
	l->next->next->next = ft_lstnew(ft_strdup("4"));
	expected = 1;
	actual = ft_lstsize(l);
	printf("expected = %d\n", expected);
	printf("my result = %d\n", actual);
}*/
