#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[7] = "abc123";
	char	dest[7] = {0};

	printf("src  = {%s}\n", src);
	printf("dest = {%s}\n", dest);
	ft_strncpy(dest, src, 3);
	printf("ft_strncpy is working...\ndest = {");
	for (int i = 0; i < 7; ++i)
		if (dest[i] == 0)
			printf("(NULL)");
		else
			printf("%c", dest[i]);
	printf("}\n");
}
