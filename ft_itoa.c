#include "libft.h"

char *ft_itoa(int n)
{
	char *str;
	int len;

	len = ft_intlen(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);

}
