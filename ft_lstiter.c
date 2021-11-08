/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:14:25 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/09 02:11:04 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*DESCRIPTION
Iterates the list ’lst’ and applies the function
’f’ to the content of each element.
PARAMETERS
#1. The adress of a pointer to an element.
#2. The adress of the function used to iterate on
the list.*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	if (!lst || !(*f))
		return ;
	while (temp != NULL)
	{
		(*f)(temp->content);
		temp = temp->next;
	}
}
