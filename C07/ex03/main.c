#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*demo = NULL;
	char	*sep = " $ ";
	char	*strs[5] =
	{
		"test1",
		"testtest2",
		"testtesttest3",
		"testtesttesttest4",
		"testtesttesttesttest5"
	};

	demo = ft_strjoin(5, strs, sep);
	printf("%s\n", demo);
	free(demo);
}
