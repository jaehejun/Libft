/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:44:55 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/20 21:49:14 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *s1, const void *s2, size_t n)
{
	char	*dest;
	char	*src;

	dest = s1;
	src = s2;
	while (*dest && *src && n-- > 0)
	{
		if (dest == src)
		{
			*dest++;
			*src++;
		}
		*dest++ = *src++;
	}
	return (s1);
}
