#include <stdlib.h>

char	*create_token(char *str, char *sep);

int		is_sep(char ch, char *sep);

int		word_count(char *str, char *sep);

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;

	strs = (char **) malloc(sizeof(char *) * (word_count(str, charset) + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			++i;
		if (str[i] && !(is_sep(str[i], charset)))
		{
			strs[j++] = create_token(str + i, charset);
			while (str[i] && !(is_sep(str[i], charset)))
				++i;
		}
	}
	strs[j] = NULL;
	return (strs);
}

char	*create_token(char *str, char *sep)
{
	char	*token;
	int		i;

	i = 0;
	while (str[i] && !(is_sep(str[i], sep)))
		++i;
	token = (char *) malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !(is_sep(str[i], sep)))
	{
		token[i] = str[i];
		++i;
	}
	token[i] = 0;
	return (token);
}

int	is_sep(char ch, char *sep)
{
	while (*sep)
	{
		if (ch == *sep)
			return (1);
		++sep;
	}
	return (0);
}

int	word_count(char *str, char *sep)
{
	int	wc;

	wc = 0;
	while (*str)
	{
		while (*str && is_sep(*str, sep))
			++str;
		if (*str && !(is_sep(*str, sep)))
		{
			++wc;
			while (*str && !(is_sep(*str, sep)))
				++str;
		}
		
	}
	return (wc);
}
