/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoilane <nmoilane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:17:51 by nmoilane          #+#    #+#             */
/*   Updated: 2024/05/07 18:31:59 by nmoilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	counter(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

static int	ft_free(char **array, int index)
{
	while (index >= 0)
	{
		free(array[index]);
		index--;
	}
	free(array);
	return (-1);
}

static void	copy_words(char *word, const char *str, int start, char c)
{
	int	x;

	x = 0;
	while (str[start] != c && (str[start] != 0))
	{
		word[x] = str[start];
		x++;
		start++;
	}
	word[x] = '\0';
}

static int	fill_array(char **array, const char *str, char c)
{
	size_t	x;
	size_t	y;
	size_t	index;

	index = 0;
	x = 0;
	while (str[x])
	{
		if (str[x] == c)
			x++;
		else
		{
			y = 0;
			while (str[x + y] != c && str[x + y])
				y++;
			array[index] = (char *)malloc(sizeof(char) * (y + 1));
			if (array[index] == 0)
				return (ft_free(array, index - 1));
			copy_words(array[index++], str, x, c);
			x += y;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**array;

	count = counter(s, c);
	array = (char **)malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);
	if (fill_array(array, s, c) == -1)
		return (0);
	array[count] = 0;
	return (array);
}
