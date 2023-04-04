/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xxft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 21:01:17 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/04 22:25:20 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int	count(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*single(const char *s, char c)
{
	int		i;
	int		num;
	char	*single;

	num = 0;
	while (s[num] != '\0' && s[num] != c)
		num++;
	single = (char *)malloc(sizeof(char) * (num + 1));
	if (single == 0)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		single[i] = s[i];
		i++;
	}
	single[i] = '\0';
	//printf("%s\n", single);
	return (single);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**all;

	i = 0;
	all = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if (all == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			all[i] = single(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	all[i] = NULL;
	return (all);
}

//int	main(void)
//{
//	char	s[] = "11a@bc1@1d@e1fg11h1 ";
//	char	c = '1';
//	ft_split(s, c);
//	printf("%s\n", ft_split(s, c));
//}