/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:19:11 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:37:23 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_len(int len)
{
	int	x;

	x = 0;
	if (len <= 0)
		x++;
	while (len)
	{
		len /= 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;

	len = digit_len(n);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (0);
	if (n == 0)
		result[0] = '0';
	if (n < 0)
		result[0] = '-';
	result[len] = '\0';
	while (n)
	{
		if (n > 0)
			result[--len] = '0' + n % 10;
		else
			result[--len] = '0' - n % 10;
		n /= 10;
	}
	return (result);
}
