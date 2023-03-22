/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:32:36 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/22 21:27:43 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char *)b;
	while (n-- > 0)
		*dest++ = c;
	return (b);
}

//#include<string.h> // #include<memory.h> 도 괜찮습니다.
//#include<stdio.h>
//int main(void)
//{
//    char arr[] = "blockdmask blog";
//    memset(arr, 48, 127 * sizeof(char));
//    printf("%s\n", arr);
//	ft_memset(arr, 48, 127 * sizeof(char));
//	printf("%s\n", arr);
//    return 0;
//}