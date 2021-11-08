/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:40:59 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/08 22:11:43 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*DESCRIPRION
Deletes and frees the given element and every
successor of that element, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to NULL.
PARAMETERS
#1. The address of a pointer to an element.
#2. The address of the function used to delete the
content of the element.*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = *lst;
		(*lst) = (*lst)->next;
		(*del)(temp->content);
		free (temp);
	}
}
