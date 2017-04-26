/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 17:18:53 by acolas            #+#    #+#             */
/*   Updated: 2017/04/26 17:53:06 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		len;
	int		i;

	len = ft_strlen(s);
	i = 0;
	while (len > 0)
	{
		if (c == '\0')
			return ((char *)s + len);
		if (s[i] == c)
			return ((char *)s + i);
		i++;
		len--;
	}
	return (0);
}
