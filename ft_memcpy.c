/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 12:54:27 by acolas            #+#    #+#             */
/*   Updated: 2017/04/28 12:54:30 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		len;
	int		i;

	len = ft_strlen(src);
	i = 0;
	while (len > 0 && n > 0)
	{
		(*((unsigned char *)(dest + i)) = *((unsigned char *)src + i));
		i++;
		len--;
		n--;
	}
	return (dest);
}
