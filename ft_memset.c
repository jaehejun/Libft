/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:32:36 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/01 20:24:43 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dest;

	dest = (unsigned char *)b;
	while (len-- > 0)
		*dest++ = c;
	return (b);
}

//#include<string.h>
//#include<stdio.h>

//int main(void)
//{
//    char arr[] = "blockdmask blog";
//    memset(arr, 48, 4 * sizeof(char));
//    printf("%s\n", arr);
//	ft_memset(arr, 48, 4 * sizeof(char));
//	printf("%s\n", arr);
//    return 0;
//}