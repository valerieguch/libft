
char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	c &= 0b11111111;
	p = s;
	while (*p)
		p++;
	while (*p != c && p != s)
		p--;
	if (*p == c)
		return ((char *) p);
	else
		return (0);
}
