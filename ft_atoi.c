/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 18:54:41 by acolas            #+#    #+#             */
/*   Updated: 2017/04/26 16:01:20 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_number(const char *str, unsigned long long int i, int neg)
{
	unsigned long long int	num;

	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (neg == 1)
	{
		num = -num;
		return (num);
	}
	return (num);
}

int		ft_atoi(const char *str)
{
	unsigned long long int	i;
	int						neg;

	i = 0;
	neg = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		neg = 1;
		ft_putchar('-');
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (ft_number(str, i, neg));
}
