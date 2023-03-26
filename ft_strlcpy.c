/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:04:06 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/26 23:47:37 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*s2;
	int		flag;

	if (dstsize == 0)
		return (strlen(src));
	flag = 0;
	if (dstsize > 0)
		flag = 1;
	s2 = (char	*)src;
	while (*src && dstsize-- > 1)
		*dst++ = *s2++;
	if (flag == 1)
		*dst = 0;
	return (strlen(src));
}

//#include <stdio.h>
//#include <string.h>

//int	main(void)
//{
//	char a[100] = "abcde";
//	char b[100] = "01234";
	
//	printf("%zu\n", ft_strlcpy(a, b, 0));
//	printf("%s\n", a);
//	printf("%lu\n", strlcpy(a, b, 0));
//	printf("%s\n", a);
	
//	printf("%zu\n", ft_strlcpy(a, b, 5));
//	printf("%s\n", a);
//	printf("%lu\n", strlcpy(a, b, 5));
//	printf("%s\n", a);

//	return (0);
//}
