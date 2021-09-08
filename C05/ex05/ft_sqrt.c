int ft_sqrt(int nb)
{
	int	res;
	
	res = 1;
	while (res * res < nb)
		++res;
	if (res * res == nb)
		return (res);
	return (0);
}
