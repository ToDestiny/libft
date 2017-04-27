
int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	int		len1;
	int		len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while (len1 > 0 || len2 > 0)
	{
		if (s1[i] == s2[i] && n > 0)
		{
			i++;
			len1--;
			len2--;
			n--;
		}
		return (s1[i] - s2[i]);
	}
}