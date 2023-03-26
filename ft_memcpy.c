/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:44:47 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/26 21:18:46 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	while (s1 != s2 && n-- > 0)
	{
		*s1++ = *s2++;
	}
	return (dst);
}

	//#include <stdio.h>

	//int	main(void)
	//{
	//	char	a[] = "abcde";
	//	char	b[] = "01234";

	//	ft_memcpy(a, b, 8);
	//	printf("%s\n", a);
	//}
