#include "libft.h"
#include <stdio.h>

int main()
{
	char *s = "Hello World!";
	char dst[50] = "";

	printf("%ld\n", ft_strlcat(dst, s, 5));
}
