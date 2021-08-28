int	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!ft_is_digit(str[i]))
			return (0);
	return (1);
}
