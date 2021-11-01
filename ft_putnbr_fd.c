#include<unistd.h>
#include "libft.h"

void ft_putnbr_fd (int n, int fd)
{
	if ( n >= 0 && n <=9)
		ft_putchar_fd(n + '0', fd);
	
	else if ( n < 0)
	{
		if(n <=10)
			ft_putnbr_fd(-(n/10), fd);
		ft_putnbr_fd(-(n%10), fd);
	}
	else if (n >= 10 )
	{
		if(n >10)
			ft_putnbr_fd((n/10), fd);
		    ft_putnbr_fd(n%10, fd);
	}

}