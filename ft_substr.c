/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:06:39 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:07:35 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	strlen;
	size_t	x;

	x = 0;
	strlen = len;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if ((start + len) > ft_strlen(s))
		strlen = ft_strlen(s) - start;
	new_str = malloc(strlen + 1);
	if (!new_str)
		return (NULL);
	while (x < strlen)
	{
		new_str[x] = s[start + x];
		x++;
	}
	new_str[strlen] = '\0';
	return (new_str);
}
