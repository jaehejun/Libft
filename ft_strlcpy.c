/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:04:06 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/22 21:39:25 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*srcs;

	srcs = (char	*)src;
	while (*dst && size-- > 1)
		*dst++ = *srcs++;
	*dst = 0;
	return (ft_strlen(src));
}
