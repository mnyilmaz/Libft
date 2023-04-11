#include "libft.h"

int	ft_atoi(const char *s)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (*s == 32 || (*s > 8 && *s < 14))
		s++;
	if (*s == 45 || *s == 43)
	{
		if (*s == 45)
			sign *= -1;
		s++;
	}
	while (*s > 47 && *s < 58)
	{
		result = (*s - 48) + (result * 10);
		s++;
	}
	return (result * sign);
}
