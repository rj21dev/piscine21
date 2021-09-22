#include "ft_stock_str.h"

int	main(int argc, char **argv)
{
	t_stock_str		*test;
	int				i;

	test = ft_strs_to_tab(argc, argv);

	ft_show_tab(test);

	i = 0;
	while (test[i].str)
		free(test[i++].copy);
	free(test);
}