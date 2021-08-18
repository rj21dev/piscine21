#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div, mod;

	ft_div_mod(15, 5, &div, &mod);
	printf("div = %d, mod = %d\n", div, mod);
}
