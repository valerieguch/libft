/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteel   <gsteel@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2000/01/01 20:20:20 by gsteel            #+#    #+#             */
/*   Updated: 2000/01/01 20:20:20 by gsteel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	void			*r;
	size_t			n;

	r = malloc(count * size);
	if (!r)
		return (NULL);
	p = r;
	while (count)
	{
		n = size;
		while (n)
		{
			*p = '\0';
			p++;
			n--;
		}
		count--;
	}
	return (r);
}
