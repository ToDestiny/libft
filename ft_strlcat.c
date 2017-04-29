/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:14:05 by acolas            #+#    #+#             */
/*   Updated: 2017/04/27 16:14:11 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dstc;
	const char	*srcc;
	size_t		n;
	size_t		dstlen;

	dstc = dst;
	srcc = src;
	n = size;
	while (n-- != 0 && *dstc != '\0')
		dstc++;
	dstlen = dstc - dst;
	n = size - dstlen;
	if (n == 0)
		return (dstlen + ft_strlen(srcc));
	while (*srcc != '\0')
	{
		if (n != 1)
		{
			*dstc++ = *srcc;
			n--;
		}
		srcc++;
	}
	*dstc = '\0';
	return (*dstc + (srcc - src));
}
