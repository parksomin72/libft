#include "libft.h"
#include <stdio.h>


int main()
{
	int a = 10;

	t_list *tmp = NULL, *first;
	first = ft_lstnew((void)&a);
	tmp->next = first;
	printf("%d\n", (int)first->content);
}
