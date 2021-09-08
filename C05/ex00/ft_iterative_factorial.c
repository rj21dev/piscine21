int ft_iterative_factorial(int nb)
{
	int i;
	int	fact;

	i = 0;
	fact = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
		fact *= i;
	return (fact);
}
