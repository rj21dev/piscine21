#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char s1[] = "AAA";
	char s2[] = "BBB";
	char s3[] = "AAA";
	char s4[] = "BBB";

	printf("%s\n", ft_strcat(s1, s2));
	printf("%s\n", strcat(s3, s4));
}
