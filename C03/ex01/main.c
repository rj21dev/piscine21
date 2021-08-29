#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "abcaaa";
	char s2[] = "abcbaa";
	char s3[] = "abaaaa";
	char s4[] = "abzaaa";

	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n\n", strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s1, s3, 3));
	printf("%d\n\n", strncmp(s1, s3, 3));
	printf("%d\n", ft_strncmp(s1, s4, 3));
	printf("%d\n", strncmp(s1, s4, 3));
}
