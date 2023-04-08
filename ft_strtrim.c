/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:50:27 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/08 12:07:14 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) != 0 && start < end)
		start++;
	while (ft_strchr(set, s1[end]) != 0 && end > 0)
		end--;
	if (start >= ft_strlen(s1))
		trimmed = (char *)malloc(sizeof(char) * 1);
	else
		trimmed = (char *)malloc(sizeof(char) * (end - start + 2));
	if (trimmed == 0)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, end - start + 2);
	return (trimmed);
}
	//trimmed[i] = '\0';

#include <stdio.h>
int	main(void)
{
	//char	a[] = "lorem ipsum dolor sit amet";
	//char	b[] = "te";
	//char	c[] = "tel";
	char	s1[] = "          ";
	//char	v[] = "";
	//char	s[] = "   xxx   xxx";
	//char	ss[] = " x";
//	//ft_strtrim(a, b);
//	//ft_strtrim(a, c);
	printf("%s\n", ft_strtrim(s1, " "));
	printf("%s\n", ft_strtrim("", ""));
	printf("%s\n", ft_strtrim("aaaaaaaaaa", "a"));
	if (printf("%s\n", ft_strtrim("", "")) == 1)
		printf("correct");

//	//ft_strtrim(a, v);
	//ft_strtrim(s, ss);
	//return (0);
}