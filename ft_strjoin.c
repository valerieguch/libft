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

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*mal;
	char	*p;

	len = ft_strlen(s1) + ft_strlen(s2);
	mal = malloc (sizeof(char) * len + 1);
	p = mal;
	if (!mal)
		return (0);
	while (*s1)
	{
		*p = *s1;
		s1++;
		p++;
	}
	while (*s2)
	{
		*p = *s2;
		p++;
		s2++;
	}
	*p = '\0';
	return (mal);
}
