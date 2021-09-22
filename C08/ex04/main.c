#include "ft_stock_str.h"

int	main(int argc, char **argv)
{
	t_stock_str		*test;
	int				i;

	test = ft_strs_to_tab(argc, argv);

	i = 0;
	while (test[i].str)
	{
		printf("%s\n%i\n%s\n\n", test[i].str, test[i].size, test[i].copy);
		++i;
	}

	i = 0;
	while (test[i].str)
		free(test[i++].copy);
	free(test);
}