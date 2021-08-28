int	ft_is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!ft_is_alpha(str[i]))
			return (0);
	return (1);
}
