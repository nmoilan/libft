/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:56:51 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:33:46 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int val, size_t len)
{
	unsigned char	*p;
	unsigned char	v;

	p = (unsigned char *)ptr;
	v = (unsigned char)val;
	while (len-- > 0)
		*(p++) = v;
	return (ptr);
}
