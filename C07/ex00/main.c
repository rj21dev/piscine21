#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str;

	str = ft_strdup("AAccXXddFFgggRR444");
	printf("%s\n", str);
	free (str);
}