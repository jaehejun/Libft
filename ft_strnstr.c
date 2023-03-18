/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:44:53 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/18 21:56:37 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check_needle(const char *haystack, const char *needle, size_t len)
{
	while (len-- > 0)
	{
	}
	return (0);
}

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	if (needle == 0)
		return (haystack);
	return (check_needle(haystack, needle, len));
}