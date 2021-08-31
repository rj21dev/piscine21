#include <unistd.h>

void	ft_putchar(char c);

int		ft_strlen(char *str);

int		is_valid_base(char *base);

void	print_base(int nbr, char* base, int len);

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (base && len > 1 && is_valid_base(base))
		print_base(nbr, base, len);
}

void	print_base(int nbr, char* base, int len)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr == 0)
		return ;
	print_base(nbr / len, base, len);
	ft_putchar(base[nbr % len]);
}

int		is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}
