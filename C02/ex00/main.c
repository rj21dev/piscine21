#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[7] = "abc123";
	char	dest[7] = {0};

	printf("src  = {%s}\n", src);
	printf("dest = {%s}\n", dest);
	ft_strcpy(dest, src);
	printf("ft_strcpy is working...\ndest = {");
	for (int i = 0; i < 7; ++i)
		if (dest[i] == 0)
			printf("(NULL)}\n");
		else
			printf("%c", dest[i]);
}
