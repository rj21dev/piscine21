int	ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!ft_is_upper(str[i]))
			return (0);
	return (1);
}
