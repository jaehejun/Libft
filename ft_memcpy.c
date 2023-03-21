/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:44:47 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/21 16:53:50 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char	*dest;
	char	*src;

	dest = s1;
	src = s2;
	while (dest != src && n-- > 0)
	{
		*dest++ = *src++;
	}
	return (s1);
}
