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

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalSize;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	totalSize = nmemb * size;
	if (totalSize / nmemb != size)
		return (NULL);
	ptr = malloc(totalSize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalSize);
	return (ptr);
}
