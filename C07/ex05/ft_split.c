#include <stdlib.h>

int		is_sep(char str_pos, char *sep);

int		word_count(char *str, char *sep);

char	*create_token(char *str, char *sep);

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		strs;

	arr = (char **) malloc(sizeof(char *) * (word_count(str, charset) + 1));
	strs = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			++i;
		if (str[i] && !(is_sep(str[i], charset)))
		{
			arr[strs++] = create_token(str + i, charset);
			while (str[i] && !(is_sep(str[i], charset)))
				++i;
		}
	}
	arr[strs] = NULL;
	return (arr);
}

int	is_sep(char str_pos, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (str_pos == sep[i])
			return (1);
		++i;
	}
	return (0);
}

int	word_count(char *str, char *sep)
{
	int	i;
	int	wc;

	wc = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			++i;
		if (str[i] && !(is_sep(str[i], sep)))
		{
			++wc;
			while (str[i] && !(is_sep(str[i], sep)))
				++i;
		}
	}
	return (wc);
}

char	*create_token(char *str, char *sep)
{
	char	*token;
	int		i;

	i = 0;
	while (str[i] && !(is_sep(str[i], sep)))
		++i;
	token = (char *) malloc(sizeof(char) * i + 1);
	i = 0;
	while (str[i] && !(is_sep(str[i], sep)))
	{
		token[i] = str[i];
		++i;
	}
	token[i] = 0;
	return (token);
}
