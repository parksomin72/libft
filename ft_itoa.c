#include "libft.h"

int	ft_intlen(long n)
{
	int len;

	len = 0;
	if (n >= 0 && n <= 9)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}


char *ft_convert(long n, int size, char *str)
{
	long nb;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	str[size - 1] = '\0';
	if (nb >= 0 && nb <= 9)
	{
		str[0] = nb + '0';
		return (str);
	}
	while (nb > 0)
	{
		str[size - 1] = (nb % 10) + '0';
		size--;
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

char *ft_itoa(int n)
{
	char *str;
	int len;

	len = ft_intlen((long)n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	return (ft_convert((long)n, len, str));
}
/*
#include <stdio.h>

int main()
{
	int n = 2147483647;
	int len = ft_intlen((long)n);

	printf("%d\n%s\n", len, ft_itoa(n));
}*/
