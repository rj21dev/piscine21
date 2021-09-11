#include <unistd.h>

void	print_arg(char *str);

void	str_selection_sort(char **arr, int len);

void	swap_str(char **a, char **b);

int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	str_selection_sort(argv, argc);
	while (i < argc)
		print_arg(argv[i++]);

	return (0);
}

void	str_selection_sort(char **arr, int len)
{
	int i;
	int	j;
	int	smallest;

	i = 1;
	while (i < len - 1)
	{
		smallest = i;
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(arr[smallest], arr[j]) > 0)
				smallest = j;
			++j;
		}
		swap_str(&arr[i], &arr[smallest]);
		++i;
	}
}

void	swap_str(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	print_arg(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}
