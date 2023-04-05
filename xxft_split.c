/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xxft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 21:01:17 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/05 22:45:13 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//int	count(const char *s, char c)
//{
//	int	count;
//	int	i;

//	i = 0;
//	count = 0;
//	while (s[i] != '\0')
//	{
//		while (s[i] != '\0' && s[i] == c)
//			i++;
//		if (s[i] != '\0' && s[i] != c)
//		{
//			count++;
//			while (s[i] != '\0' && s[i] != c)
//				i++;
//		}
//	}
//	return (count);
//}

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
	printf("%s\n", single);
	return (single);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**all;

	i = 0;
	all = (char **)malloc(sizeof(char *) * (count_single(s, c) + 1));
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

int	main(void)
{
//	char	s[] = "11a@bc1@1d@e1fg11h1 ";
//	char	c = '1';
//	ft_split(s, c);
//	printf("%s\n", ft_split(s, c));
	ft_split("hello!", ' ');
}

#include <stdio.h>
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
	while (*s != '\0' && *s == c)
	{
		s++;
		printf("pre-single %p\n", s);
	}
	while (s[num] != '\0' && s[num] != c)
		num++;
	single = (char *)malloc(sizeof(char) * (num + 1));
	if (single == 0)
		return (NULL);
	index = 0;
	while (num-- > 0)
	{
		single[index++] = *s++;
		printf("in single : %p\n", s);
	}
	//while (s[index] != '\0' && s[index] != c)
	//{
	//	single[index] = s[index];
	//	index++;
	//}
	single[index] = '\0';
	printf("%s\n", single);
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
	int		size;

	size = count_single(s, c);
	printf("count_done\n");
	all = (char **)malloc(sizeof(char *) * (size + 1));
	if (all == 0)
		return (NULL);
	printf("malloc_done\n");
	printf("size : %d\n", size);
	index = 0;
	while (size-- > 0)
	{
		//while (*s != '\0' && *s == c)
		//{
		//	s++;
		//	printf("before single : %p\n", s);
		//}
		if (*s != '\0')
		{
			all[index] = single(s, c);
			printf("single_done\n");
			if (all[index] == 0)
			{
				free_all(all, index);
				return (NULL);
			}
			index++;
			printf("index ++\n");
			printf("s after single : %p\n", s);
			//while (*s != '\0' && *s != c)
			//{
			//	s++;
			//	printf("after single : %p\n", s);
			//}
		}
	}
	all[index] = NULL;
	return (all);
}

int	main(void)
{
	ft_split(" lorem ipsum dolor sit amet, ", ' ');
}