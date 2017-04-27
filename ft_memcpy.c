
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		len;
	int		i;

	len = ft_strlen(src);
	i = 0;
	while (len > 0 && n > 0)
	{
		dest[i] = src[i];
		i++;
		len--;
		n--;
	}
	return (dest)
}