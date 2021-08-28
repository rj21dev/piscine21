int	ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!ft_is_lower(str[i]))
			return (0);
	return (1);
}
