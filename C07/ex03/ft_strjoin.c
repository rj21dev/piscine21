#include <stdlib.h>

int		ft_strlen(char *str);

int		total_length(int size, char **strs, char *sep);

void	str_multi_cat(char *dest, int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buf;

	if (!size)
	{
		buf = (char *) malloc(1);
		*buf = 0;
		return (buf);
	}
	buf = (char *) malloc(sizeof(char) * (total_length(size, strs, sep) + 1));
	if (!buf)
		return (NULL);
	str_multi_cat(buf, size, strs, sep);
	return (buf);
}

void	str_multi_cat(char *dest, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			while (sep[j])
				dest[k++] = sep[j++];
		++i;
	}
	dest[k] = 0;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	total_length(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	return (len);
}
