/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:54:29 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:27:15 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	f;
	size_t	i;

	f = 0;
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[f] && f < len)
	{
		if (haystack[f] && needle[i])
		{
			i = 0;
			while (haystack[i + f] == needle[i] && i + f < len)
			{
				i++;
				if (!(needle[i]))
					return ((char *)&haystack[f]);
			}
		}
		f++;
	}
	return (0);
}
