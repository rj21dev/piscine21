#include <stdio.h>

int ft_recursive_factorial(int nb);

int	main(void)
{
	for (int i = -3; i < 13; ++i)
		printf("!%i = %i\n", i, ft_recursive_factorial(i));
}
