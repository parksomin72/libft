#include "libft.h"
#include <stdio.h>

int main()
{
	char c;

	printf("Enter your character: ");
	scanf("%c", &c);
	if (ft_isalpha(c) != 0)
		printf("this character is alpha\n");
	else if (ft_isdigit(c) != 0)
		printf("this character is a digit\n");
}
