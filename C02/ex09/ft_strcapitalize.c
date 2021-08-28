int	ft_is_alpha(char c);

int	ft_is_digit(char c);

int	ft_is_lower(char c);

int	ft_is_upper(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !(ft_is_alpha(str[i]) || ft_is_digit(str[i])))
			++i;
		if (ft_is_lower(str[i]))
			str[i] -= 32;
		++i;
		while (str[i] && (ft_is_alpha(str[i]) || ft_is_digit(str[i])))
		{
			if (ft_is_upper(str[i]))
				str[i] += 32;
			++i;
		}
	}
	return (str);
}

int	ft_is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}
