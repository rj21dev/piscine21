#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "lol";
	printf("str = \"%s\", strlen = %d\n", str, ft_strlen(str));
}
