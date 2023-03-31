/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:42:16 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/31 19:03:40 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		memsize;

	memsize = (int)ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * (memsize + 1));
	if (!copy)
		return (NULL);
	while (*s1)
		*copy++ = *s1++;
	*copy = '\0';
	return (copy - memsize);
}

//#include <stdio.h>
//int	main(void)
//{
//	char str[] = "lorem ipsum dolor sit amet";
//	printf("%s\n", ft_strdup(str));
//	return (0);
//}