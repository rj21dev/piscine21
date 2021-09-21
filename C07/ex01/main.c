#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*arr;
	int	min = 5, max = 15, size = max - min;

	arr = ft_range(min, max);
	if (arr == NULL)
		printf("NULL\n");
	
	for (int i = 0; i < size; ++i)
		printf("%i\t", arr[i]);
	printf("\n");
	free(arr);
}
