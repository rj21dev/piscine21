#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "asdfQWER123+-*@ #\tx";

	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s\n", str);
}
