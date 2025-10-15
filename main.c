#include "libft.h"
#include <stdio.h>

int main()
{
	char *s = "Hi! there I'm new here";

	printf("trim: %s\n",  ft_strtrim(s, "ie"));
}
