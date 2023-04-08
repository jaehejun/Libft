/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:54:03 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/08 11:54:20 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	memsize(char const *s, unsigned int start, size_t len)
{
	if (start < ft_strlen(s))
	{
		if (start + len <= ft_strlen(s))
			return (len + 1);
		else if (start + len > ft_strlen(s))
			return (ft_strlen(s) - start + 1);
	}
	return (1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	msize;
	int		i;

	msize = memsize(s, start, len);
	i = 0;
	substr = (char *)malloc(sizeof(char) * msize);
	if (substr == 0)
		return (NULL);
	while (msize-- > 1)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
