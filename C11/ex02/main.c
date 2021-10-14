#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*));

int	only_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] >= 'Z')))
			return (0);
		++i;
	}
	return (1);
}

int	main(void)
{
	char	*str[4] = {"test1", "test2", "test3", "4test"};

	if (ft_any(str, only_alpha))
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

