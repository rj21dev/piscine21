#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	arr[10] = {0};
	int	i = 0;
	char c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb != 0)
	{
		arr[i] = nb % 10;
		nb /= 10;
		++i;
	}
	while (--i >= 0)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
	}
	
}
