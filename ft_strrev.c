/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <acolas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 20:10:09 by acolas            #+#    #+#             */
/*   Updated: 2017/05/04 20:10:11 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	if (str)
	{
		i = 0;
		len = ft_strlen(str);
		while (i < len)
		{
			tmp = str[i];
			str[i] = str[len];
			str[len] = tmp;
			i++;
		}
	}
	return (str);
}

#include <stdio.h>
int		main(void)
{
	printf("%s\n", ft_strrev("Salut"));
	return (0);
}
