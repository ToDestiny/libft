/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 17:25:25 by acolas            #+#    #+#             */
/*   Updated: 2017/04/25 18:29:58 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, unsigned int n)
{
	int	i;
	int j;
	int	len;

	i = 0;
	len = ft_strlen(str);
	if (!(*to_find))
		return ((char *)str);
	while (len > 0)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0' && n > 0)
		{
			j++;
			n--;
		}
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
		len--;
	}
	return (0);
}
