/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:42:16 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/08 11:35:00 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	memsize;

	memsize = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * (memsize + 1));
	if (copy == 0)
		return (NULL);
	while (*s1 != '\0')
		*copy++ = *s1++;
	*copy = '\0';
	return (copy - memsize);
}
