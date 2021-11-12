/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 02:12:10 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:38:55 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
Iterates the list ’lst’ and applies the function
’f’ to the content of each element. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of an element if needed.

PARAMETERS
#1. The adress of a pointer to an element.
#2. The adress of the function used to iterate on the list.
#3. The adress of the function used to delete the
content of an element if needed.*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_map;
	t_list	*elem;

	if (!lst)
		return (NULL);
	lst_map = NULL;
	while (lst != NULL)
	{
		elem = ft_lstnew((*f)(lst->content));
		if (elem == NULL)
			ft_lstclear(&elem, (*del));
		else
			ft_lstadd_back(&lst_map, elem);
		lst = lst->next;
	}
	return (lst_map);
}
