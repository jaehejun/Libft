/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:41:04 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/31 20:15:29 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	if (n == 0 || (c1 == 0 && c2 == 0))
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
//	char	*e = 0;
//	char	*f = 0;
//	printf("%d\n", ft_memcmp(e, f, 5));
//	printf("%d\n", ft_memcmp(c, d, 0));
//	return (0);
//}