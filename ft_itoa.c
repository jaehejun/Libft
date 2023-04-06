/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:41:48 by jaehejun          #+#    #+#             */
/*   Updated: 2023/04/06 21:51:41 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_number(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		len;
	long	number;

	number = (long)n;
	len = len_number(number);
	itoa = (char *)malloc(sizeof(char) * (len + 1));
	if (itoa == 0)
		return (NULL);
	itoa[len] = '\0';
	if (number == 0)
		itoa[0] = '0';
	if (number < 0)
	{
		itoa[0] = '-';
		number *= -1;
	}
	while (number > 0)
	{
		itoa[--len] = number % 10 + '0';
		number = number / 10;
	}
	return (itoa);
}
