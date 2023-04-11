#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cal;

	cal = malloc(count * size);
	if (!cal)
		return (NULL);
	ft_bzero(cal, count * size);
	return (cal);
}
