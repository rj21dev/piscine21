#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10] = {9, 1, 6, 4, 2, 8, 3, 7, 0, 5};

	for (int i = 0; i < 10; ++i)
		printf("%d ", tab[i]);
	printf("\n");
	ft_sort_int_tab(tab , 10);
	for (int i = 0; i < 10; ++i)
		printf("%d ", tab[i]);
	printf("\n");
}
