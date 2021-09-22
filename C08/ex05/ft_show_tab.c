#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putsize(int size);

void	ft_putstr(char *str);

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putsize(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		++i;
	}
}

void	ft_putsize(int size)
{
	char	c;

	if (size < 10)
	{
		c = size + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putsize(size / 10);
		ft_putsize(size % 10);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
