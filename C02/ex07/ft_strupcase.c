int	ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (ft_is_lower(str[i]))
			str[i] -= 32;
	return (str);
}
