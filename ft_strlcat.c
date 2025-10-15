/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-han <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:45:17 by fael-han          #+#    #+#             */
/*   Updated: 2025/10/14 10:38:38 by fael-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstLen;
	size_t	srcLen;

	dstLen = ft_strlen(dst);
	srcLen = ft_strlen(src);

	if (dstLen >= size)
		return (srcLen + size);
	i = 0;
	while (i + dstLen < size - 1 && src[i])
	{
		dst[dstLen + i] = src[i];
		i++;
	}
	dst[dstLen + i] = '\0';
	return (dstLen + srcLen);
}
