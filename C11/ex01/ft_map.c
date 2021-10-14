#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*map;
	int	i;

	map = (int *) malloc(sizeof(int) * length);
	if (!map)
		return (NULL);
	i = 0;
	while (i < length)
	{
		map[i] = f(tab[i]);
		++i;
	}
	return (map);
}
