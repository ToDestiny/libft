/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <acolas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 16:47:25 by acolas            #+#    #+#             */
/*   Updated: 2017/05/04 16:47:27 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int len;

	if (s)
	{
		len = ft_strlen(s);
		if (len > 0)
		{
			write(1, s, len);
			ft_putchar('\n');
			ft_putchar('\0');
		}
	}
}
