#include<stdlib.h>
#include "libft.h"
char * ft_strmapi ( char const *s,char (*f) ( unsigned int, char))
{
char *result;
char *point;
unsigned int i;

i = 0;
result = ft_strdup(s);
if(!result)
   return( NULL);
point = result;
while(*point)
{
	*point = f(i, *point); 
	point++;
	i++;
}

return(result);
}
