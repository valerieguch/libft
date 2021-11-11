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

static char	*ft_strcpy(char *dest, const char *src)
{
	char	*temp;

	temp = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}

char	*ft_strdup(const char *src)
{
	char	*result;

	result = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (result)
		result = ft_strcpy(result, src);
	return (result);
}
