/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:23:00 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/03 20:41:32 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) + 1;
	while (len-- > 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

//int	main(void)
//{
//	char	a[] = "abcde";
//	int		c = 'f';

//	if (ft_strchr(a, c) == 0)
//	printf("null");
//	printf("%s\n", a);
//	return (0);
//}
//#include <stdio.h>

//int	main(void)
//{
//	int a = 116;
//	int b = 116 + 256;
//	char c = (char)a;
//	char d = (char)b;
//	unsigned char e = (unsigned char)a;
//	unsigned char f = (unsigned char)b;

//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	printf("%d\n", f);
//	return (0);
//}