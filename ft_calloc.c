/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:55:18 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:55:21 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*x;

	if (count != 0 && SIZE_MAX / count < size)
		return (0);
	x = (void *)malloc (count * size);
	if (x == 0)
		return (x);
	ft_bzero(x, count * size);
	return (x);
}
