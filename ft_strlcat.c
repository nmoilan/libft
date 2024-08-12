/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:40:46 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:29:30 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	totlen;

	dstlen = 0;
	totlen = 0;
	if ((!dst || !src) && !dstsize)
		return (0);
	while (dst[dstlen] && dstlen < dstsize)
		dstlen++;
	if (dstlen < dstsize)
		totlen = dstlen + ft_strlen(src);
	else
		return (dstsize + ft_strlen(src));
	while (*src && dstlen < (dstsize - 1))
	{
		dst[dstlen++] = *src++;
	}
	dst[dstlen] = '\0';
	return (totlen);
}
