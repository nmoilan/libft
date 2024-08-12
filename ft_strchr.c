/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:19:37 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:50:21 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	symbol;
	int		x;

	symbol = (char)c;
	x = 0;
	while (s[x])
	{
		if (s[x] == symbol)
			return ((char *)&s[x]);
		x++;
	}
	if (s[x] == symbol)
		return ((char *)&s[x]);
	return (0);
}
