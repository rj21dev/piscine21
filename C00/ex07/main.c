#include <unistd.h>

void	putnbr(int nbr);

int	main(void)
{
	putnbr(2147483647);
	write(1, "\n", 1);
	putnbr(-2147483648);
	write(1, "\n", 1);
	putnbr(42);
	write(1, "\n", 1);
}
