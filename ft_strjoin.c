#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*alc;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	alc = (char *)malloc(((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char)));
	if (!alc)
		return (NULL);
	while (*s1)
	{
		alc[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		alc[i++] = *s2;
		s2++;
	}
	alc[i] = 0;
	return (alc);
}
