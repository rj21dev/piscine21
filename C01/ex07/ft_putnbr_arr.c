#include <unistd.h>

void	putnbr(int nbr)
{
	int	arr[10] = {0};
	int	i = 0;
	char c;

	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	while (nbr != 0)
	{
		arr[i] = nbr % 10;
		nbr /= 10;
		++i;
	}
	while (--i >= 0)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
	}
	
}
