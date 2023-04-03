/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:50:27 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/03 23:38:41 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;
	int		i;
	int		size;

	if (s1 == 0 || set == 0)
		return ("");
	i = 0;
	start = 0;
	//printf("*start : %p\n", &s1[start]);
	while (ft_strchr(set, s1[start]) != 0 && (int)ft_strlen(s1) > start)
		start++;
	//printf("start : %c\n", s1[start]);
	//printf("*start : %p\n", &s1[start]);
	//printf("start_len : %ld\n", &s1[start] - s1);
	end = ft_strlen(s1);
	while (ft_strrchr(set, s1[end]) != 0)
		end--;
	//printf("end : %c\n", s1[end]);
	size = end - start + 2;
	if (size <= 1)
	{
		trimmed = malloc(1);
		*trimmed = '\0';
	}
	else
		trimmed = (char *)malloc(sizeof(char) * (size));
	if (trimmed == 0)
		return (NULL);
	while (size-- > 1)
		trimmed[i++] = s1[start++];
	trimmed[i] = '\0';
	//printf("return : %s\n", trimmed);
	return (trimmed);
}

//int	main(void)
//{
//	char	a[] = "lorem ipsum dolor sit amet";
//	char	b[] = "te";
//	char	c[] = "tel";
//	char	s1[] = "          ";
//	char	v[] = "";
//	//ft_strtrim(a, b);
//	//ft_strtrim(a, c);
//	ft_strtrim(s1, " ");
//	//ft_strtrim(a, v);
//	return (0);
//}
