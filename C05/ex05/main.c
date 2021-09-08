#include <stdio.h>

int ft_sqrt(int nb);

int	main(void)
{
	int arr[20] = {0};

	for (int i = 0; i < 20; ++i)
		arr[i] = i * i;

	printf("sqrt(%i) = %i\n", -4, ft_sqrt(-4)); // negative
	printf("sqrt(%i) = %i\n", 2, ft_sqrt(2));	// irrational result

	for (int i = 0; i < 20; ++i)				// exist roots & zero
		printf("sqrt(%i) = %i\n", arr[i], ft_sqrt(arr[i]));
}
