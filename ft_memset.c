#include <stdlib.h>


void *ft_memset(char *b, int c, size_t len)
{
	char *p;
	p = b;
	c &= 0b11111111;
	while(len)
	{
      *p = c;
      p++;
      len--;

	}
	return (b);

}