#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int	i;
	int	j;

	if (!s1 || !s2)
		return (NULL);
	s = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!s)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = '\0';
	return (s);
}
