/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-han <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:30:40 by fael-han          #+#    #+#             */
/*   Updated: 2025/10/14 12:37:59 by fael-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	if (!little)
		return ((char *)big);
	i = 0;
	while (big [i] && i < n)
	{
		y = 0;
		while (little[y] && big[i + y] && big[i + y] == little[i])
			y++;
		if (little[i] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
