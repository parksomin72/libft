/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-han <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:30:40 by fael-han          #+#    #+#             */
/*   Updated: 2025/10/20 02:57:39 by fael-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		y = 0;
		while (little[y] && big[i + y] && i + y < len
			&& big[i + y] == little[y])
			y++;
		if (little[y] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
