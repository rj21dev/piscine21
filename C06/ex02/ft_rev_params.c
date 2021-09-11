#include <unistd.h>

void	print_arg(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	while (argc > 1)
		print_arg(argv[--argc]);
	return (0);
}
