#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char s1[] = "AAA";
	char s2[] = "BBBCCC";
	char s3[] = "CCCDDD";

	printf("%s\n", ft_strncat(s1, s2, 3));
	printf("%s\n", strncat(s1, s3, 3));
}
