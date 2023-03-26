/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:37:43 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/26 22:28:40 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dest;

	dest = (unsigned char *)b;
	while (len-- > 0)
		*dest++ = c;
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//void	ft_bzero(void *s, size_t n)
//{
//	char	*arr;

//	arr = (char *)s;
//	while (n-- > 0)
//		*arr++ = 0;
////}
//#include <stdio.h>
//#include <string.h>
//#include <strings.h>
//int	main(void)
//{
//	char	a[] = "abcde";
	
//	ft_memset(a, 48, 3);
//	printf("%s\n", a);

//	memset(a, 48, 3);
//	printf("%s\n", a);

//	bzero(a, 3);
//	printf("%s\n", a);

//	return (0);
//	}