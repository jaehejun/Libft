#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

//int	main(void)
//{
//	size_t	a = 1;
//	unsigned int	b = 5;
//	printf("%zu\n", a);			//size_t : unsigned long
//	printf("%d\n", b);			//b : unsinged int
//	printf("%lu\n", a + b);		//unsigned long + unsigned int -> unsigned long
//}

int	main(void)
{
	char	s[] = "          ";
	char	n[] = " ";
	int		i = 0;
	while (s[i])
	{
		i++;
		printf("%s\n", ft_strchr(n, s[i]));
	}
	return (0);
}