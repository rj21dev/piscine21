#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**arr;
	int		i;

	i = 0;
	arr = ft_split("_hello$my$##cool=frie nd!+", "! _=$+#@");
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		++i;
	}

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		++i;
	}
	free(arr);
}