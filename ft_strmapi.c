/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:36:52 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/06 18:55:25 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	x;
	char	*str;
	char	*res;

	x = 0;
	if (!s)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	res = str;
	while (*s)
		*str++ = f(x++, *s++);
	*str = '\0';
	return (res);
}
