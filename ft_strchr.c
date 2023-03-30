/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:23:00 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/30 16:09:45 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		s++;
		if (*s == '\0' && (char)c != '\0')
			return (NULL);
	}
	return ((char *)s);
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