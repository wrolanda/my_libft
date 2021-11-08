/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:27:59 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/08 13:19:10 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Adds the element ’new’ at the end of the list.*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_elem;

	if (*lst)
	{
		last_elem = ft_lstlast(*lst);
		last_elem->next = new;
	}
	else
		*lst = new;
}
/*void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*first_elem;

	first_elem = *lst;
	if (*lst)
	{
		while ((*lst)->next != NULL)
			(*lst) = (*lst)->next;
		(*lst)->next = new;
		*(lst) = first_elem;
	}
	else
		*lst = new;
}*/
