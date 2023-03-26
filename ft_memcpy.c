/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:44:47 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/26 16:46:17 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char	*dest;
	char	*src;

	dest = (char *)s1;
	src = (char *)s2;
	while (dest != src && n-- > 0)
	{
		*dest++ = *src++;
	}
	return (s1);
}

	//#include <stdio.h>

	//int	main(void)
	//{
	//	char	a[] = "abcde";
	//	char	b[] = "01234";

	//	ft_memcpy(a, b, 8);
	//	printf("%s\n", a);
	//}
