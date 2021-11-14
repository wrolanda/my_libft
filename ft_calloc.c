/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrolanda <wrolanda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:28:03 by wrolanda          #+#    #+#             */
/*   Updated: 2021/11/13 17:40:32 by wrolanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*calloc - memory allocation.
	The calloc() function contiguously allocates
	enough space for count objectsthat are size 
	bytes of memory each and returns a pointer to the 
	allocated memory.  The allocated memory is filled
	with bytes of value zero.
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(size * count);
	if (p == (void *)0)
		return ((void *)0);
	ft_bzero(p, count * size);
	return (p);
}
