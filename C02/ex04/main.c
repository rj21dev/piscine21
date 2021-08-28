#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_is_lower(char c);

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	test1[] = "qweASD123+-*";
	char	test2[] = "asdfqwerty";
	char	test3[] = {0};
	
	/* TEST ft_is_lower() */

	for (int i = 0, l = strlen(test1); i < l; ++i)
		printf("%5d", islower(test1[i]));
	printf("\n");
	for (int i = 0, l = strlen(test1); i < l; ++i)
		printf("%5d", ft_is_lower(test1[i]));
	printf("\n");

	/* TEST ft_str_is_lowercase() */

	printf("false: %d, true: %d, empty: %d\n", ft_str_is_lowercase(test1), ft_str_is_lowercase(test2), ft_str_is_lowercase(test3));
}
