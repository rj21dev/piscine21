#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_is_digit(char c);

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	test1[] = "aZ3,@\n";
	char	test2[] = "0123456789";
	char	test3[] = {0};
	
	/* TEST ft_is_digit() */

	for (int i = 0, l = strlen(test1); i < l; ++i)
		printf("%5d", isdigit(test1[i]));
	printf("\n");
	for (int i = 0, l = strlen(test1); i < l; ++i)
		printf("%5d", ft_is_digit(test1[i]));
	printf("\n");

	/* TEST ft_str_is_numeric() */

	printf("false: %d, true: %d, empty: %d\n", ft_str_is_numeric(test1), ft_str_is_numeric(test2), ft_str_is_numeric(test3));
}
