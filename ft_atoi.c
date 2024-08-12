/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:42:55 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:42:40 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	result;
	long	prev;
	int		minus;

	result = 0;
	minus = 1;
	prev = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			minus = -1;
	while (*str >= '0' && *str <= '9')
	{
		prev = (result * 10) + (*str++ - '0');
		if (prev / 10 != result && minus == 1)
			return (-1);
		else if (prev / 10 != result && minus == -1)
			return (0);
		result = prev;
	}
	return ((int)result * minus);
}
