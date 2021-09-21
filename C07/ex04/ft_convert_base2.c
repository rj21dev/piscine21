#include <stdlib.h>

int		is_base_valid(char *base);

int		ft_strlen(char *str);

int		ft_atoi_base(char *str, char *base);

void	strrev(char *str, int sign)
{
	int		i;
	int		len;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i + sign];
		str[i + sign] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		++i;
	}
}

void	ft_itoa_base(int nbr, char *base, char *result)
{
	int	i;
	int	len;

	len = ft_strlen(base);
	i = 0;
	if (nbr < 0)
	{
		result[i++] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		result[i++] = base[nbr % len];
		nbr /= len;
	}
	result[i] = 0;
	if (result[0] == '-')
		strrev(result, 1);
	else
		strrev(result, 0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*result;

	if (!(is_base_valid(base_from) && is_base_valid(base_to)))
		return (NULL);
	result = (char *) malloc(sizeof(char) * 33);
	if (!result)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	ft_itoa_base(nb, base_to, result);
	return (result);
}
