#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main()
{
	printf("%d\n", ft_atoi_base("FF", "0123456789ABCDEF"));
}
