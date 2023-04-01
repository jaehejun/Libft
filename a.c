#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	size_t	a = 1;
	unsigned int	b = 5;
	printf("%zu\n", a);			//size_t : unsigned long
	printf("%d\n", b);			//b : unsinged int
	printf("%lu\n", a + b);		//unsigned long + unsigned int -> unsigned long
}