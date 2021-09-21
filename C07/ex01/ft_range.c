#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*range;

	size = max - min;
	if (size <= 0)
		return (NULL);
	range = (int *) malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
		range[i++] = min++;
	return (range);
}