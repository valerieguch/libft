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

static	void	ft_copy(char *dst, const char *str, size_t n)
{
	while (n)
	{
		*dst = *str;
		dst++;
		str++;
		n--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)

{
	char	*d;
	char	*s;

	if (dst != src)
	{
		d = dst;
		s = (char *) src;
		if (src < dst)
		{
			while (n)
			{
				n--;
				d[n] = s[n];
			}
		}
		else
		{
			ft_copy(dst, src, n);
		}
	}
	return (dst);
}
