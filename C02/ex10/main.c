#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[7] = "abc123";
	char	dest[7] = {0};
	int		len;

	printf("src  = {%s}\n", src);
	printf("dest = {%s}\n", dest);
	len = ft_strlcpy(dest, src, 3);
	printf("ft_strlcpy is working...\ndest = {");
	for (int i = 0; i < 7; ++i)
		if (dest[i] == 0)
		{
			printf("(NULL)}\nlen = %d\n", len);
			break;
		}
		else
			printf("%c", dest[i]);
}
