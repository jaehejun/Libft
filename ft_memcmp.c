/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:41:04 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/30 21:17:55 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*c1 == *c2 && --n > 0)
	{
		c1++;
		c2++;
	}
	return (*c1 - *c2);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	a[] = "s";
//	char	b[] = "sCpy";
//	char	c[] = "abcdefghij";
//	char	d[]	= "abcdefgxyz";
//	printf("%d\n", ft_memcmp(a, b, 0));
//	printf("%d\n", ft_memcmp(c, d, 0));
//	return (0);
//}