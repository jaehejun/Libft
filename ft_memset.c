/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:32:36 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/17 19:36:25 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*arr;

	i = 0;
	arr = (unsigned char *)b;
	while (i < n)
	{
		arr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

#include<string.h> // #include<memory.h> 도 괜찮습니다.
#include<stdio.h>
 
int main(void)
{
    char arr1[] = "blockdmask blog";
    memset(arr1, 0, 5 * sizeof(char));
    printf("%s\n", arr1);
    return 0;
}