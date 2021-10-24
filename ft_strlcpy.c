#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*src_start;

	if (dstsize == 0)
		return (ft_strlen(src));
	src_start = src;
	while (*src && dstsize -1)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (ft_strlen(src_start));
}
