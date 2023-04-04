/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 21:01:17 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/04 22:39:25 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count(const char *s, char c)
{
	int	count;
	int	index;

	index = 0;
	count = 0;
	while (s[index] != 0)
	{
		if (s[index] != c && (s[index + 1] == c || s[index + 1] == '\0'))
			count++;
		index++;
	}
	return (count);
}

char	*single(const char *s, char c)
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
	while (s[index] != '\0' && s[index] != c)
	{
		single[index] = s[index];
		index++;
	}
	single[index] = '\0';
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
	while (*s != '\0')
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
//	//char	s[] = "11a@bc1@1d@e1fg11h1 ";
//	//char	c = '1';
//	//ft_split(s, c);
//	ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
//	//printf("%s\n", ft_split(s, c));
//}