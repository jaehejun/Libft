/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:26:51 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/30 21:17:21 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && --n > 0)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break ;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

//#include <stdio.h>

//int	main(void)
//{
//	char a[] = "aaa";
//	char b[] = "aa";

//	printf("%d\n", ft_strncmp(a, b, 0));
//	return (0);
//}
