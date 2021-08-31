int	ft_strlen(char *str);

int	is_space(char c);

int	is_base_valid(char *base);

int	find_in_base(char *base, char to_find);

int	ft_atoi_base(char *str, char *base)
{
	int	basis;
	int	nbr;
	int	sign;
	int	matched;

	if (!is_base_valid(base))
		return (0);
	basis = ft_strlen(base);
	nbr = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((matched = find_in_base(base, *str)) != -1)
	{
		nbr *= basis;
		nbr += matched;
		str++;
	}
	return (nbr * sign);
}

int	is_base_valid(char *base)
{
	int		i;
	int		j;

	if (base == 0 || ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

int	find_in_base(char *base, char to_find)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == to_find)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
}
