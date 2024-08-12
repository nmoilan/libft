/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:52:54 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:35:12 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	int					i;

	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!d && !s)
		return (NULL);
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (d);
}
