/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:52:51 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/08 12:39:41 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*strmapi;
	unsigned int	len;
	unsigned int	index;

	len = ft_strlen(s);
	index = 0;
	strmapi = (char *)malloc(sizeof(char) * len + 1);
	if (strmapi == 0)
		return (NULL);
	while (s[index] != '\0')
	{
		strmapi[index] = f(index, s[index]);
		index++;
	}
	strmapi[index] = '\0';
	return (strmapi);
}
