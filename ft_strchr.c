
char	*ft_strchr(const char *s, int c)
{
	c &= 0b11111111;
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *) s);
	else
		return (0);
}