#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "abc";
	char s2[] = "abc";
	char s3[] = "aba";
	char s4[] = "abz";
	char s5[] = "";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s3));
	printf("%d\n", ft_strcmp(s1, s4));
	printf("%d\n", ft_strcmp(s1, s5));
}
