
void	*memchr(const void *str, int c, size_t n)
{
	int		i;

	i = 0;
	while (n > 0)
	{
		if ((char *)str[i] == c)
			return (str[i]);
		n--;
		i++;
	}
	return (0);
}