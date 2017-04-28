/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 12:54:15 by acolas            #+#    #+#             */
/*   Updated: 2017/04/28 12:54:18 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, int n)
{
	int		i;
	int		len1;
	int		len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while (len1 > 0 || len2 > 0)
	{
		if ((((unsigned char *)s1 + i) == ((unsigned char *)s2 + i)) && n > 0)
		{
			i++;
			len1--;
			len2--;
			n--;
		}
		return (((unsigned char *)s1 + i) - ((unsigned char *)s2 + i));
	}
	return (0);
}
