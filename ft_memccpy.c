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

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int		i;

	if (!n)
		return(0);
	i = 0;
	while (--n)
	{
		if (*((unsigned char *)src + i) == (unsigned char)c)
			return ((unsigned char *)dest + i++);
		(*((unsigned char *)(dest + i)) = *((unsigned char *)src + i));
		i++;
		n--;
	}
	return (0);
}