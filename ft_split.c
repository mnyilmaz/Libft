#include "libft.h"

static int	counter(char const *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			counter++;
			while (*s && *s != c)
				s++;
		}
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	cnt;
	char	**alc;

	i = 0;
	if (!s)
		return (NULL);
	cnt = counter(s, c);
	alc = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!alc)
		return (NULL);
	while (i < cnt)
	{
		while (*s == c)
		s++;
		len = 0;
		while (s[len] != c && s[len])
			len++;
		alc[i++] = ft_substr(s, 0, len);
		s = s + len;
	}
	alc[i] = NULL;
	return (alc);
}
