/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 21:01:17 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/05 23:40:21 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_single(const char *s, char c)
{
	int	count;
	int	index;

	index = 0;
	count = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && (s[index + 1] == c || s[index + 1] == '\0'))
			count++;
		index++;
	}
	return (count);
}

static char	*single(const char *s, char c)
{
	int		index;
	int		num;
	char	*single;

	num = 0;
	while (s[num] != '\0' && s[num] != c)
		num++;
	single = (char *)malloc(sizeof(char) * (num + 1));
	if (single == 0)
		return (NULL);
	index = 0;
	while (num-- > 0)
	{
		single[index] = s[index];
		index++;
	}
	single[index] = '\0';
	return (single);
}

static void	free_all(char **str, int index)
{
	while (index-- > 0)
		free(str[index]);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	char	**all;

	all = (char **)malloc(sizeof(char *) * (count_single(s, c) + 1));
	if (all == 0)
		return (NULL);
	index = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			all[index++] = single(s, c);
			if (all[index - 1] == 0)
			{
				free_all(all, index);
				return (NULL);
			}
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	all[index] = NULL;
	return (all);
}
