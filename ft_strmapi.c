// int main(void)
// {
// 	char s[] = "hello world my name is lera";

// 	char *result = malloc(sizeof(char) * (ft_strlen(s) + 1));

// 	unsigned int i = 0;
// 	while (s[i])
// 	{
// 		result[i] = ft_toupper(s[i]);
// 		i++;
// 	}

// 	puts(result);
// }

// 1) выделить память под новую строку
// 1.1) если память не выделилась, вернуть NULL
// 2) составить новую строку, при этом применяя к каждому
//    символу функцию f. Она принимает индекс и символ