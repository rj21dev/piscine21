#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr < 10)
	{
		char	ch = nbr + '0';
		write(1, &ch, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int	main(void)
{
	int	arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_foreach(arr, 10, ft_putnbr);
}
