#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;
	size_t i;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (dest > src)
	{
		i = n;
		while (i--)
			s1[i] = s2[i];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
