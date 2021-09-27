#include "ft.h"

int	main(void)
{
	char	*str = "Hello!";

	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr("Length = ");
	ft_putchar(ft_strlen(str) + '0');
	ft_putchar('\n');
	ft_putchar(ft_strcmp("abc", "abc") + '0');
	ft_putchar('\n');
}
