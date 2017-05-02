/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <acolas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 20:47:54 by acolas            #+#    #+#             */
/*   Updated: 2017/05/02 20:47:55 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char const			*end;
	char const			*beg;
	char				*dst;
	unsigned int		i;
	char				**tab;

	if (s)
	{
		i = 0;
		while (s[i] == c)
			i++;
		beg = (s + i);
		end = (s + i);
		while (s[i])
		{
			if (s[i] >= 33 && s[i] <= 126)
				end = s + i;
			i++;
		}
		if ((end - beg) > 0)
			end++;
		dst = ft_strsub(s, beg - s, end - beg);
		return (tab);
	}
	return (0);
}

}
