int	ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (ft_is_upper(str[i]))
			str[i] += 32;
	return (str);
}
