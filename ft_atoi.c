/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-han <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:07:08 by fael-han          #+#    #+#             */
/*   Updated: 2025/10/14 18:40:59 by fael-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*tmp;
	int		sign;
	int		result;

	tmp = (char *)nptr;
	sign = 1;
	result = 0;
	while (*tmp == ' ' || *tmp == '\n' || *tmp == '\r' || *tmp == '\v'
		|| *tmp == '\f' || *tmp == '\t')
		tmp++;
	if (*tmp == '-' || *tmp == '+')
	{
		if (*tmp == '-')
			sign *= -1;
		tmp++;
	}
	while (*tmp >= '0' && *tmp <= '9')
	{
		result = result * 10 + (*tmp - '0');
		tmp++;
	}
	return (result * sign);
}
