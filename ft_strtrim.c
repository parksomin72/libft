#include "libft.h"

int	ft_strlen_trim(char const *s, char const *set)
{
	int	i;
	int	y;
	int	len;

	len = 0;
	y = 0;
	while (s[y])
	{
		i = 0;
		while (set[i] && s[y] != set[i])
		{
			len++;
			i++;
		}
		y++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	i;
	int	y;

	if (!s1)
		return (NULL);
	if (!set || set[0] == '\0')
		return ((char *)s1);
	str = (char *)malloc(ft_strlen_trim(s1, set) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*s1)
	{
		y = 0;
		while (set[y])
		{
			if (set[y] == *s1)
				s1++;
			y++;
		}
		str[i++] = *s1;
		s1++;
	}
	str[i] = '\0';
	return (str);
}
