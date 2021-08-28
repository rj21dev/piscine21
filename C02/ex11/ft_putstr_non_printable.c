#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printhex(int n)
{
	char *hex;
	
	hex = "0123456789abcdef";
	ft_putchar(hex[n / 16]);
	ft_putchar(hex[n % 16]);
}

void ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] == 127)
		{
			ft_putchar('\\');
			printhex(str[i]);
		}
		else
			ft_putchar(str[i]);
		++i;
	}
}
