/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-han <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:41:51 by fael-han          #+#    #+#             */
/*   Updated: 2025/10/14 18:47:54 by fael-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
	size_t	totalSize;
	void	*ptr;

	totalSize = nmemb * size;
	if (totalSize == 0)
	{
		*ptr = NULL;
		return (ptr);
	}
	ptr = malloc(totalSize);
	if (!ptr)
		return (NULL);
	return (ft_bzero(ptr, totalSize));
}
