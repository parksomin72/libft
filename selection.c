#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void selection_sort(int T[], int size)
{
	int i, j, tmp;

	i = 1;
	while (i < size)
	{
		tmp = T[i];
		j = i - 1;
		while (tmp < T[j] && j >= 0)
		{
			T[j + 1] = T[j];
			j--;
		}
		T[j + 1] = tmp;
		i++;
	}
}

int main()
{
	int T[5] = {3, 5, 2, 1, 4};

	selection_sort(T, 5);
	for (int i = 0; i < 5; i++)
		printf("T[%d] = %d\t", i + 1, T[i]);
	printf("\n");
	return (0);
}
