#include <unistd.h>

void	print_arg(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
		print_arg(argv[i++]);
	return (0);
}
