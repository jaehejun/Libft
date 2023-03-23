/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:37:43 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/23 22:23:46 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	//char	*arr;

	//arr = (char *)s;
	//while (n-- > 0)
	//	*arr++ = 0;
		ft_memset(s, 0, n);
}

//int	main(void)
//{
//	char	a[] = "abcde";
	

//}