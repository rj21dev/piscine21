#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	for (int i = -2; i < 25; ++i)
		printf("2^%i = %i\n", i, ft_recursive_power(2, i));
}
