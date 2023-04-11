#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*mlc;
	char	*ptr;

	len = ft_strlen(s1);
	mlc = (char *)malloc(len + 1);
	if (!mlc)
		return (NULL);
	ptr = mlc;
	while (*s1)
		*ptr++ = *s1++;
	*ptr = '\0';
	return (mlc);
}
