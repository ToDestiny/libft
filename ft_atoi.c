/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 18:54:41 by acolas            #+#    #+#             */
/*   Updated: 2017/04/25 20:04:20 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				i;
	int				len;
	unsigned int	num;

	if (!(*str))
	{
		len = ft_strlen(str);
		i = 0;
		while (len > 0)
		{
			while (str[i++] <= 32)
			if (str[i++] == '-')
				ft_putchar('-');
			else if (str[i++] == '+')
			while (str[i] >= '0' && str[i] <= '9')
			{
				num = num * 10 + (str[i] - '0');
				i++;
			}
			return (num);
		}
		return (0);
	}
	else
		return (0);
}
