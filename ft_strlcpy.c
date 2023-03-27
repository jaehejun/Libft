/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:04:06 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/27 20:15:00 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		check_space;
	int		src_len;

	src_len = ft_strlen(src);
	check_space = 0;
	if (dstsize != 0)
		check_space = 1;
	while (*src && dstsize-- > 1)
		*dst++ = *src++;
	if (check_space == 1)
		*dst = 0;
	return (src_len);
}

//#include <stdio.h>
//#include <string.h>

//int	main(void)
//{
//	char a[] = "aaaaa";
//	char b[] = "bbb";
//	ft_strlcpy(a, b, 3);
//	ft_strlcpy(a, b, 10);
//	ft_strlcpy(a, b, 0);
	//printf("%zu\n", ft_strlcpy(a, b, 3));
	//printf("%s\n", a);
	//printf("%zu\n", ft_strlcpy(a, b, 0));
	//printf("%s\n", a);
	//printf("%lu\n", strlcpy(a, b, 0));
	//printf("%s\n", a);

	//printf("%zu\n", ft_strlcpy(a, b, 5));
	//printf("%s\n", a);s
	//printf("%lu\n", strlcpy(a, b, 5));
	//printf("%s\n", a);

//	return (0);
//}
