#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (!*needle)
		return ((char *)haystack);
	h = 0;
	while (haystack[h] && h < len)
	{
		n = 0;
		if (haystack[h] == needle[n])
		{
			while (haystack[h + n] == needle[n] && (h + n < len))
			{
				n++;
				if (!needle[n])
					return ((char *)&haystack[h]);
			}
		}
		h++;
	}
	return (NULL);
}
