#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	c &= 0b11111111;
	if (n == 0)
		return (0);
	while (*p != c && n - 1)
	{
		p++;
		n--;
	}
	if (*p != c)
		return (0);
	else
		return ((void *) p);
}
