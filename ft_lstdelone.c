/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:03:39 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:37:45 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
Takes as a parameter an element and frees the
memory of the element’s content using the function
’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.
PARAMETERS
#1. The element to free.
#2. The address of the function used to delete the
content.*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*temp;

	temp = lst;
	if (lst && del)
	{
		lst = lst->next;
		(*del)(temp->content);
		free(temp);
	}
}
