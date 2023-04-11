#include "libft.h"

int	ft_toupper(int c)
{
	if ((unsigned char)c < 123 && (unsigned char)c > 96)
		c -= 32;
	return (c);
}
