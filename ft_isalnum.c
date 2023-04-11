#include "libft.h"

int	ft_isalnum(int c)
{
	return ((47 < c && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123));
}
