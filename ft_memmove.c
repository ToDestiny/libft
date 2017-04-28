void	*memmove(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = -1;
	str1 = (char *)src;
	str2 = (char *)dst;
	if (str1 < str2)
		while ((int)(--n) >= 0)
			*(str1 + n) = *(str2 + n);
	else
		while (i++ < len)
			*(str1 + i) = *(str2 + i);
	return (dest);
}