#include <unistd.h>
#include <fcntl.h>

void	ft_print_file(char *filename)
{
	int		fd;
	char	**buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_file(argv[1]);
	else if (argc < 2)
		write(2, "File name missing.\n", 19);
	else
		write(2, "Too many arguments.\n", 20);
	return (0);
}
