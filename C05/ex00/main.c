#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	for (int i = -3; i < 13; ++i)
		printf("!%i = %i\n", i, ft_iterative_factorial(i));
}
