#include<stdlib.h>
#include <stdio.h>

static int ft_contain(char const *set, char c )
{
	if (!c)
		return (0);
	while (*set && *set != c)
		set++;
	return (*set == c);
}

static char * ft_dup ( char *s, size_t len  )
{
	char * result;
	char * p;
	result = malloc( sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	p = result;
	while ( len)
	{
		*p = *s;
		p++;
		s++;
		len--;
	}
	* p = '\0';
	return ( result);
}

char * ft_strtrim( char const *s1, char const *set)
{
	char	*start;

	while (*s1 && ft_contain(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_dup("", 0));
	start = (char *) s1;
	while (*s1)
		s1++;
	s1--;
	while (ft_contain(set, *s1) && s1 > start)
		s1--;
	return ( ft_dup(start, s1 - start));
}