/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-han <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:48:37 by fael-han          #+#    #+#             */
/*   Updated: 2025/10/14 12:09:27 by fael-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int	i;
	int	index;

	i = 0;
	tmp = (char *)s;
	index = -1;
	while (tmp[i])
	{
		if (tmp[i] == (unsigned char)c)
			index = i;
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&tmp[index]);
	if (index != -1)
		return (&tmp[index]);
	return (NULL);
}
