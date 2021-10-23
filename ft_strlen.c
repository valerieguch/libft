
#include <stdlib.h>
size_t ft_strlen( const char *s)
{
	size_t l;
	l = 0;
	while (*s)
	{
		s++;
		l++;
	}
	return (l);
}