#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_subsrt(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		dl;

	dl = ft_strlen(&s[start]);
	printf("dl: %d\n", dl);
	if (dl < len)
		len = dl;

	printf("we will allocate %zd bytes\n", len + 1);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	char *p = result;
	// printf("%c\n", s[start]);
	while (len && s[start])
	{
		*p = s[start];
		p++;
		start++;
		len--;
	}
	*p = '\0';

	return (result);
}

int main(void)
{
	char s[] = "he";
	int start = 6;
	int len = 5;

	char *result = ft_subsrt(s, start, len);

	int i = 0;
	while (i < len + 1)
	{
		printf("%c ", result[i]);
		i++;
	}
	puts("");
}
