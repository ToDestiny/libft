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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t		i;

	i = 0;
	str1 = (char *)src;
	str2 = (char *)dest;
	if (str1 < str2)
		while (--n)
			*(str1 + n) = *(str2 + n);
	else
		while (i++ < n)
			*(str1 + i) = *(str2 + i);
	return (dest);
}