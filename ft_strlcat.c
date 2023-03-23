/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:08:59 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/23 22:33:38 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*srcs;
	size_t	dst_len;
	size_t	src_len;

	srcs = (char *)src;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (ft_strlen(dst) > dstsize)
		return (src_len + dstsize);
	while (*dst)
		dst++;
	while (*srcs && dstsize-- > 1)
		*dst++ = *srcs;
	*dst = 0;
	return (dst_len + src_len);
}
