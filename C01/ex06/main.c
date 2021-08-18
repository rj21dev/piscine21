#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "abcdqwerty";
	printf("str = \"%s\", length = %d\n", str, ft_strlen(str));
}
