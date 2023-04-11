#include "libft.h"

int	ft_tolower(int c)
{
	if ((unsigned char)c < 91 && (unsigned char)c > 64)
		c += 32;
	return (c);
}
