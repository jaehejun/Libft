/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:50:27 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/08 15:23:01 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) != 0 && start < end)
		start++;
	while (ft_strchr(set, s1[end]) != 0 && end > 0)
		end--;
	if (start >= ft_strlen(s1))
		trimmed = (char *)malloc(sizeof(char) * 1);
	else
		trimmed = (char *)malloc(sizeof(char) * (end - start + 2));
	if (trimmed == 0)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, end - start + 2);
	return (trimmed);
}
