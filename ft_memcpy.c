#include <stdlib.h>
#include <stdio.h>


 void * memcpy(void *dst, const void *src, size_t n)
{
	char * d;
	char * s;
	if( dst != src )
	{
		d = dst;
		s = (char *)src;
		while(n)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
    return(dst);
	}