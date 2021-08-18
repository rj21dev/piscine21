#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a = 11;
	int b = 22;

	printf("Init : a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After swap : a = %d, b = %d\n", a, b);
}