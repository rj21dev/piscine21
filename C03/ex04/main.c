#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	printf("%s\n", strstr("AAABBBCCC", "BBB"));
	printf("%s\n", ft_strstr("AAABBBCCC", "BBB"));
}