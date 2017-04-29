/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 19:14:03 by acolas            #+#    #+#             */
/*   Updated: 2017/04/28 19:14:05 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	if (n)
	{
		while (n != '\0')
		{
			if((*(unsigned char *)dst++ = *(const unsigned char *)src++) == (unsigned char)c)
				return (dst);
				n--;
		}
	}
	return (0);
}