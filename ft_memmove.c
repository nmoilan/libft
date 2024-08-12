/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:20:16 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:34:27 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	forward(unsigned char *d, const unsigned char *s, size_t len)
{
	size_t	x;

	x = 0;
	while (x < len)
	{
		d[x] = s[x];
		x++;
	}
}

static void	backward(unsigned char *d, const unsigned char *s, size_t len)
{
	while (len > 0)
	{
		len--;
		d[len] = s[len];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		forward(d, s, len);
	else
		backward(d, s, len);
	return ((void *)d);
}
