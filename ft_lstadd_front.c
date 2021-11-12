/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:14:56 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/10 20:37:01 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
Adds the element ’new’ at the beginning of the list.
PARAMETERS 
#1. The address of a pointer to the first link of
a list.
#2. The address of a pointer to the element to be
added to the list.*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}
