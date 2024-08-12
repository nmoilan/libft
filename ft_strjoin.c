/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:40:00 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:30:54 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	totlen;
	size_t	len1;

	len1 = ft_strlen(s1);
	totlen = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)malloc(totlen + 1);
	if (s3 == 0)
		return (0);
	ft_strlcpy(s3, s1, len1 + 1);
	ft_strlcat(s3, s2, totlen + 1);
	s3[totlen] = '\0';
	return (s3);
}
