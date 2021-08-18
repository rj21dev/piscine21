void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	smallest;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		smallest = i;
		while (j < size)
		{
			if (tab[j] < tab[smallest])
				smallest = j;
			++j;
		}
		ft_swap(&tab[i], &tab[smallest]);
		++i;
	}
}
