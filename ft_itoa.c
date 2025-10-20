/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-han <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 01:56:36 by fael-han          #+#    #+#             */
/*   Updated: 2025/10/17 01:56:49 by fael-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_intlen(long n)
{
	size_t len;

	len = 1;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 9)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char *ft_convert(char *s, long n, int len)
{
	int issigned;
	s[len--] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	issigned = n < 0;
	while (len > issigned)
	{
		s[len] = (n % 10) + '0';
		len--;
		n /= 10;
	}
	return (s);
}

char *ft_itoa(int n)
{
	char *str;
	int len;

	len = ft_intlen(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	return (ft_convert(str, n, len));
}

// int main()
// {
// 	char *s = ft_itoa(-2147483648);
// 	printf("%s\n", s);
// }