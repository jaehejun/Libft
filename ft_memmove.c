/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:44:55 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/22 21:27:52 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*dest;
	char	*src;

	dest = (char *)s1;
	src = (char *)s2;
	while (*dest && *src && n-- > 0)
		*dest++ = *src++;
	return (s1);
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