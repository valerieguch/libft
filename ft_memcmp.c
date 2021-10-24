#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (n == 0)
		return (0);
	p1 = s1;
	p2 = s2;
	while ((*p1 == *p2) && n - 1)
	{
		p1++;
		p2++;
		n--;
	}
	return (*p1 - *p2);
}
