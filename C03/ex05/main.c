#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char s1[] = "AAA";
	char s2[] = "BBBCCC";
	
	printf("%i: %s\n", ft_strlcat(s1, s2, 3), s1);
}
