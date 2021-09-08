#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int count = 0;
	for (int i = 0; i < 1000; ++i)
	{
		if (ft_is_prime(i))
		{
			printf("%i\t", i);
			++count;
			if (count % 10 == 0)
				printf("\n");
		}	
	}
}
