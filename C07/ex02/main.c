#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*arr = NULL;
	int	min = 5, max = 15, size = max - min;

	ft_ultimate_range(&arr, min, max);
	if (arr == NULL)
		printf("NULL\n");
	
	for (int i = 0; i < size; ++i)
		printf("%i\t", arr[i]);
	printf("\n");
	free(arr);
}
