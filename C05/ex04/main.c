#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	for (int i = -2; i < 46; ++i)
		printf("Fib (%i) = %i\n", i, ft_fibonacci(i));
}
