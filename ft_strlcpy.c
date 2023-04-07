/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:04:06 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/07 23:22:00 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		check_space;
	size_t	src_len;

	src_len = ft_strlen(src);
	check_space = 0;
	if (dstsize != 0)
		check_space = 1;
	while (*src != '\0' && dstsize-- > 1)
		*dst++ = *src++;
	if (check_space == 1)
		*dst = '\0';
	return (src_len);
}
