/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:40:52 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/30 19:31:43 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (*s1 != (unsigned char)c && n > 0)
	{
		s1++;
		n--;
	}
	if ((*s1 == '\0' && (unsigned char)c != '\0') || n == 0)
		return (NULL);
	return (s1);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	a[] = "aaaaa";
//	int		c = 'b';
//	printf("%s\n", ft_memchr(a, c, 1));
//	return (0);
//}