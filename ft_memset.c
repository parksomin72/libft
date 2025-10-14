#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *tmp;
	size_t i;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
