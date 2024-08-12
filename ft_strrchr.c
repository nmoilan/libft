/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:44:42 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:17:34 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	x;
	size_t	i;

	str = (char *)s;
	x = (char)c;
	i = 0;
	while (str[i] != ('\0'))
		i++;
	while (i > 0)
	{
		if (str[i] == x)
			return (str + i);
		i--;
	}
	if (str[i] == x)
		return (str);
	return (NULL);
}
