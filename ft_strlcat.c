/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:08:59 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/28 15:20:08 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	int		check_space;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	check_space = 0;
	if (dstsize != 0 || dst_len <= dstsize)
		check_space = 1;
	if (dst_len > dstsize)
		return (src_len + dstsize);
	while (*dst)
		dst++;
	while (*src && (dstsize-- - dst_len) > 1)
		*dst++ = *src++;
	if (check_space == 1)
		*dst = 0;
	return (dst_len + src_len);
}
