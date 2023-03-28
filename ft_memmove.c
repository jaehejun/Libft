/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:44:55 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/28 15:18:51 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	if (s1 < s2)
	{
		while (len-- > 0)
			*s1++ = *s2++;
	}
	else
	{
		s1 = s1 + len - 1;
		s2 = s2 + len - 1;
		while (len-- > 0)
			*s1-- = *s2--;
	}
	return (dst);
}

//#include <stdio.h>

////int	main(void)
////{
////	char	*a;
////	char	*b;

////	a = "abcde";
////	b = "fghij";

////	ft_memmove(a, b, 3);
////	printf("%s\n", a);
////}