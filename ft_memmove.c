/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 15:17:54 by acolas            #+#    #+#             */
/*   Updated: 2017/04/29 15:17:58 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dstc;
	char	*srcc;

	dstc = (char *)dst;
	srcc = (char *)src;
	if (srcc < dstc)
	{
		while (n != '\0')
		{
			dstc[n] = srcc[n];
			n--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
