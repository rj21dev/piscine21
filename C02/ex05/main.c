#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_is_upper(char c);

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	test1[] = "qweASD123+-*";
	char	test2[] = "ASDFQWERTY";
	char	test3[] = {0};
	
	/* TEST ft_is_upper() */

	for (int i = 0, l = strlen(test1); i < l; ++i)
		printf("%5d", isupper(test1[i]));
	printf("\n");
	for (int i = 0, l = strlen(test1); i < l; ++i)
		printf("%5d", ft_is_upper(test1[i]));
	printf("\n");

	/* TEST ft_str_is_uppercase() */

	printf("false: %d, true: %d, empty: %d\n", ft_str_is_uppercase(test1), ft_str_is_uppercase(test2), ft_str_is_uppercase(test3));
}
