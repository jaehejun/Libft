/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:54:03 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/01 21:02:14 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	if (start >= ft_strlen(s))
	{
		substr = (char *)malloc(sizeof(char) * 1);
		substr[0] = '\0';
	}
	else if (ft_strlen(s) < start + len)
	{
		substr = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
		if (substr == 0)
			return (0);
		i = 0;
		while (ft_strlen(s) - start > 0)
			substr[i++] = s[start++];
		substr[i] = '\0';
	}
	else
	{
		substr = (char *)malloc(sizeof(char) * (len + 1));
		if (substr == 0)
			return (0);
		i = 0;
		while (len-- > 0)
			substr[i++] = s[start++];
		substr[i] = '\0';
	}
	return (substr);
}

//int	main(void)
//{
//	char	a[] = "lorem ipsum dolor sit amet";
//	ft_substr(a, 7, 10);
//}