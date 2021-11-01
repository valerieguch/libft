#include<stdlib.h>
#include "libft.h"


static size_t ft_count( char const *s, char c)
{
	size_t words;
	char light; //почему чар?

	 if( c == '\0')
	 	return( *s != '\0'); // one 
	 words = 0;
	 light =0;
	 while( *s)
	 {
	 	if(!light && *s != c)
	 	{

	 		words++;
	 	    light = 1;
	 	}
        else if ( light && *s == c )
        {
        	light = 0;
        }
        	s++;
	 }
	 return (words);

}

static void ft_put_word(char **p, char **s, char c)
{
	char *start;
	size_t len;

	while( *s == c)
		(*s)++; //  что значит указатель в скобках? и почему мы двигем так??
	  start = *s; // почему у эс только один указатель?
	  while (**s && **s != c) //а тут уже 2..
		(*s)++;
	len = *s - start; 
	*p = malloc(sizeof(char) * (len + 1));
	if (!*p)
		return ; // вернуть нал?
	ft_strlcpy(*p, start, len + 1);

}

static void ft_free_all( char ** words)
{
	char **p;

	p = words;
	while (*p) // почему только один указатель 
		{
			p++; // why?
			free(p[-1]);// where from -1?

		}
		free(words); //why second time free?

}
char ** ft_split(char const *s, char c)
{
	 size_t word;
	 char **result;
	 char **p;


	 word = ft_count(s, c);
	 result = ft_calloc( word + 1, sizeof( char *));
	 if(!result)
	 	return( NULL);
	 p = result;
	 while(word)
	 {   ft_put_word(p, (char **) &s, c );
	 	if(!*p) // wich p?
	 	{
	 		ft_free_all( result);
	 		return( NULL);
	 	}


	     p++;
	 	word--;
	 }
}