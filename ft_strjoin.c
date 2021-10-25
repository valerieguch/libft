#include <stdio.h>
#include "libft.h"

char *ft_strjoin( char const *s1, char const *s2)
{
	size_t len;
	char *mal;
	len = ft_strlen(s1) + ft_strlen(s2);
	mal = malloc(sizeof(char) * len +1);
	char *p;
	p = mal;
	if(!mal)
		return(0);
	while(*s1)
	{
      *p = *s1;
      s1++;
      p++;
	}
	while(*s2)
	{
		*p = *s2;
		p++;
		s2++;
	}
	*p = '\0';
	return(mal);



}
// int main()
// { 
// 	char *res;
// 	char first[] = "city";
// 	char second[] = "Moscow";
// 	res = ft_strjoin(first, second);
// 	printf("%s", res);
// }