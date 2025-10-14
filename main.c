#include "libft.h"
#include <stdio.h>

int main()
{
	char *s = "Hello World!";
	char dest[50] = "p";

	ft_memcpy((void *)dest, s, 5);
	printf("%s\n", dest);
}
