#include <stdio.h>

int main()
{
	char *str = strdup("0123456789");
	char *s = ft_substr(str, 9, 10);
	printf("%s\n", s);
	free(s);
	free(str);
}
