#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; ++i)
		printf("%d ", tab[i]);
	printf("\n");
	ft_rev_int_tab(tab , 5);
	for (int i = 0; i < 5; ++i)
		printf("%d ", tab[i]);
	printf("\n");
}
