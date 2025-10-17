/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-han <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:35:44 by fael-han          #+#    #+#             */
/*   Updated: 2025/10/16 01:36:11 by fael-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isfound(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	end;
	int	start;

	if (!s1)
		return (NULL);
	end = ft_strlen(s1) - 1;
	start = 0;
	while (ft_isfound(s1[start], set))
		start++;
	while (ft_isfound(s1[end], set))
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}

// #include <stdio.h>

// int main()
// {
// 	char *s = "    Hello World        hi There    ";
// 	char *set = " ";
// 	printf("%s\n", ft_strtrim(s, set));
// }
