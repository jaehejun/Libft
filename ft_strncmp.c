/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:26:51 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/26 15:27:51 by jaehejun         ###   ########.fr       */
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
			break;
	}
	return (*s1 - *s2);
}

//#include <stdio.h>

//int	main(void)
//{
//	char a[2];
//	char b[0];

//	a[0] = 200;
//	a[1] = 0;
//	b[0] = 0;
//	printf("%d\n", ft_strncmp(a, b, 1));
//	return (0);
//}
