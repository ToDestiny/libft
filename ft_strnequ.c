/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 17:23:27 by acolas            #+#    #+#             */
/*   Updated: 2017/04/29 17:23:29 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;
	int		len1;
	int		len2;

	if (s1 && s2)
	{
		i = 0;
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		while (len1 > 0 || len2 > 0 || n > 0)
		{
			if (s1[i] == s2[i])
			{
				i++;
				len1--;
				len2--;
				n--;
			}
			else
				return (0);
		}
		return (1);
	}
	return (0);
}
