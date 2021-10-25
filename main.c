#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	char s[] = "hello world my name is lera";

	char *result = malloc(sizeof(char) * (ft_strlen(s) + 1));

	unsigned int i = 0;
	while (s[i])
	{
		result[i] = ft_toupper(s[i]);
		i++;
	}

	puts(result);
}
