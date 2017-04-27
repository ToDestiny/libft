/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 12:16:00 by acolas            #+#    #+#             */
/*   Updated: 2017/04/27 12:16:04 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strlcat(char *dst, const char *src, int size)
{
    int     i;
    int     j;
    int     len;
    int     len2;

    if (!(size))
        return (0);
    else   
        i = 0;
        j = ft_strlen(dst);
        len = ft_strlen(src);
        len2 = (j + len - 1);
        while (len > 0 && size >= j)
        {
            dst[j] = src[i];
            i++;
            j++;
            len--;
        }
        if (j !=  size)
            dst[j] = '\0';
        else
            dst[j - 1] = '\0';
        return (len2);
}
