#include <stdlib.h>
#include "libft.h"

size_t ft_strlcat ( char * dst, const char * src, size_t dstsize)
{
	size_t n;
	n = dstsize;
	while( n && *dst)
	{
		dst++;
		n--;
	}
	if( n > 0)
	{
		while( n - 1 && *src)
		{
			*dst = *src;
			dst++;
			src++;
			n--;
		}
		*dst = '\0';
	}
	return ( ft_strlen( src) + dstsize - n);
}