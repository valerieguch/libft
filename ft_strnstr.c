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
#include "libft.h"

static int	ft_compare(const char *str, const char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char	*ft_strnstr(const char *seno, const char *needle, size_t n)
{
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *) seno);
	if (n == 0)
		return (NULL);
	needle_len = ft_strlen(needle);
	while (*seno && n > needle_len - 1)
	{
		if (ft_compare(seno, needle))
			return ((char *) seno);
		seno++;
		n--;
	}
	return (NULL);
}
// проверить позже 