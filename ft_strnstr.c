#include <stdlib.h>
#include "libft.h"

static int	ft_compare(const char *str, const char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	little_len;

	if (*needle == '\0')
		return ((char *) haystack);
	if (n == 0)
		return (NULL);
	little_len = ft_strlen(needle);
	while (*haystack && n > little_len - 1)
	{
		if (ft_compare(haystack, needle))
			return ((char *) haystack);
		haystack++;
		n--;
	}
	return (NULL);
}