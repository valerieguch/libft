#include <stdlib.h>

 void ft_bzero(void *s, size_t n)
{
	char * p = s;
	while( n)
	{
		*p = '\0';
		p++;
		n--;
	}
