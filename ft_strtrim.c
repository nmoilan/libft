/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:45:48 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:16:06 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		x;
	char	*str;

	start = 0;
	x = 0;
	if (!s1)
		return (0);
	end = ft_strlen((char *)s1) - 1;
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (0);
	while (x < end - start + 1)
	{
		str[x] = s1[x + start];
		x++;
	}
	str[x] = '\0';
	return (str);
}
