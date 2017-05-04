/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <acolas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 17:05:17 by acolas            #+#    #+#             */
/*   Updated: 2017/05/04 17:05:19 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int len;

	if (s)
	{
		len = ft_strlen(s);
		if (len > 0)
		{
			write(fd, s, len);
			ft_putchar_fd('\n', fd);
			ft_putchar_fd('\0', fd);
		}
	}
}
