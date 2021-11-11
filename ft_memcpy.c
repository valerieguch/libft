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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (dst != src)
	{
		d = dst;
		s = (char *)src;
		while (n)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
	}
	return (dst);
}
