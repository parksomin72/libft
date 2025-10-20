/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-han <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 01:58:32 by fael-han          #+#    #+#             */
/*   Updated: 2025/10/20 03:21:07 by fael-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	in_word;
	int	i;
	int	count;

	in_word = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			in_word = 0;
		if (!in_word && s[i] != c)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*ft_strdup_word(char const *s, char c, int *len)
{
	char	*dest;
	int		size;
	int		i;

	size = ft_wordlen(s, c);
	dest = (char *)malloc(size + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	*len = size;
	return (dest);
}

char	**ft_free(char **str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		index_word;
	int		len;

	if (!s)
		return (NULL);
	str = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	index_word = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			str[index_word] = ft_strdup_word(s, c, &len);
			if (!str[index_word])
				return (ft_free(str, index_word));
			s += len;
			index_word++;
		}
	}
	str[index_word] = NULL;
	return (str);
}
