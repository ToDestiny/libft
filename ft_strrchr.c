/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 10:56:27 by acolas            #+#    #+#             */
/*   Updated: 2017/04/27 11:17:04 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (c == '\0')
			return ((char *)s + len);
		if (s[len] == c)
			return ((char *)s + len);
		len--;
	}
	return (0);
}
