#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int));

int	x10(int x)
{
	return (x * 10);
}

int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	*arr = ft_map(tab, 10, x10);

	for (int i = 0; i < 10; ++i)
		printf("%i ", tab[i]);
	printf("\n");

	for (int i = 0; i < 10; ++i)
		printf("%i ", arr[i]);
	printf("\n");
}

