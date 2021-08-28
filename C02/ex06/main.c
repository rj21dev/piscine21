#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_is_print(char c);

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	test1[] = "qweASD123+-*\n\t\v";
	char	test2[] = "zxcASD123~+*";
	char	test3[] = {0};
	
	/* TEST ft_is_print() */

	for (int i = 0, l = strlen(test1); i < l; ++i)
		printf("%6d", isprint(test1[i]));
	printf("\n");
	for (int i = 0, l = strlen(test1); i < l; ++i)
		printf("%6d", ft_is_print(test1[i]));
	printf("\n");

	/* TEST ft_str_is_printable() */

	printf("false: %d, true: %d, empty: %d\n", ft_str_is_printable(test1), ft_str_is_printable(test2), ft_str_is_printable(test3));
}
