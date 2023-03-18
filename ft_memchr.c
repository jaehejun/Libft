/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:44:37 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/18 21:13:18 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *s1, const void *s2, size_t n)
{
	char *arr;

	// casting 
	char *temp_s1;
	char *temp_s2;

	temp_s1 = s1;
	temp_s2 = s2;
	while (s1 != s2 && n > 0)
	{
		*temp_s1++ = *temp_s2++;
		n--;
	}
	return (s1);
}