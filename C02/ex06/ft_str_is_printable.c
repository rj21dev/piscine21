int	ft_is_print(char c)
{
	return (c >= 32 && c < 127);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!ft_is_print(str[i]))
			return (0);
	return (1);
}
