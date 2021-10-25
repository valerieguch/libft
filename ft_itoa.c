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

int ft_count(int n)
{
	int count;
	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char * ft_itoa(int a)
{
	int digits;
	int i;
	int negative;
	char *result;
	digits = ft_count(a);
	negative = (a < 0);
	result = malloc(sizeof(char) * ( digits + negative + 1));
	if (!result)
		return (NULL);
	if (negative)
		result[0] = '-';
	i = digits - 1 + negative;
	result[i + 1] = '\0';
	while (i >= negative)
	{
		if (negative)
			result[i] = -(a % 10) + '0';
		else
			result[i] = (a % 10) + '0';
		a /= 10;
		i--;

	}
	return (result);

}
