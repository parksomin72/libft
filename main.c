#include "libft.h"
#include <stdio.h>
#include <string.h>

void ft_lstprint(t_list *lst)
{
	t_list *current;

	current = lst;
	while (current)
	{
		printf("%d\n", *(int *)current->content);
		current = current->next;
	}
}

int main()
{
	int a = 4, b = 15, c = 20, f = 0;
	t_list *head;
	t_list *n1;
	t_list *tail;
	t_list *front;

	front = ft_lstnew(&f);
	head = ft_lstnew(&a);
	n1 = ft_lstnew(&b);
	tail = ft_lstnew(&c);

	head->next = n1;
	n1->next = tail;
	tail->next = NULL;
	ft_lstadd_front(&head, front);
	ft_lstprint(front);

	free(head);
	free(n1);
	free(tail);
	return (0);
}
