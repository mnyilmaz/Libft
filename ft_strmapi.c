#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*alc;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	alc = (char *)malloc((len + 1) * sizeof(char));
	if (!alc)
		return (NULL);
	i = 0;
	while (i < len)
	{
		alc[i] = f(i, s[i]);
		i++;
	}
	alc[i] = 0;
	return (alc);
}
