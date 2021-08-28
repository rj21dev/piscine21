#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_is_alpha(char c);

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	test1[] = "aZ3,@\n";
	char	test2[] = "abcXYZ";
	char	test3[] = {0};
	
	/* TEST ft_is_alpha() */

	for (int i = 0, l = strlen(test1); i < l; ++i)
		printf("%5d", isalpha(test1[i]));
	printf("\n");
	for (int i = 0, l = strlen(test1); i < l; ++i)
		printf("%5d", ft_is_alpha(test1[i]));
	printf("\n");

	/* TEST ft_str_is_alpha() */

	printf("false: %d, true: %d, empty: %d\n", ft_str_is_alpha(test1), ft_str_is_alpha(test2), ft_str_is_alpha(test3));
}
