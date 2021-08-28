#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "SALUT, comMent tu vas ? 42moTs quarante-deux; cinquante+et+un +\tzZ";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}
