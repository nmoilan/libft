/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:44:15 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:36:47 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			x;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	x = 0;
	while (x < n)
	{
		if (*str == chr)
			return (str);
		x++;
		str++;
	}
	return (NULL);
}
