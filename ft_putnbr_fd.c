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

#include<unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n <= 9 )
		ft_putchar_fd(n + '0', fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n <= 10)
			ft_putnbr_fd(-(n / 10), fd);
		ft_putnbr_fd(-(n % 10), fd);
	}
	else
	{
		if (n >= 10 )
			ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
