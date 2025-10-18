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

// static int	ft_trimloop(char c, char const *set)
// {
// 	int	i;

// 	i = 0;
// 	while (set[i])
// 		if (c == set[i++])
// 			return (1);
// 	return (0);
// }

// static char	*ft_trimarr(char const *s1, int i, int j)
// {
// 	char	*arr;
// 	int		z;

// 	z = 0;
// 	arr = NULL;
// 	if (i > j)
// 	{
// 		arr = (char *)malloc(sizeof(char) * 1);
// 		if (!arr)
// 			return (NULL);
// 		*arr = '\0';
// 	}
// 	else
// 	{
// 		arr = (char *)malloc(sizeof(char) * (j - i + 2));
// 		if (!arr)
// 			return (NULL);
// 		while (i <= j)
// 			arr[z++] = s1[i++];
// 		arr[z] = '\0';
// 	}
// 	return (arr);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int	flag;
// 	int	i;
// 	int	j;

// 	if (!s1 || !set)
// 		return (NULL);
// 	flag = 1;
// 	i = 0;
// 	j = 0;
// 	while (s1[i] && flag)
// 	{
// 		flag = ft_trimloop(s1[i], set);
// 		if (flag)
// 			i++;
// 	}
// 	flag = 1;
// 	j = ft_strlen(s1);
// 	j--;
// 	while (j > 0 && flag)
// 	{
// 		flag = ft_trimloop(s1[j], set);
// 		if (flag)
// 			j--;
// 	}
// 	return (ft_trimarr(s1, i, j));
// }

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

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	start = 0;
	while (ft_isfound(s1[start], set))
		start++;
	if (start == end + 1)
		return(ft_strdup(""));
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
