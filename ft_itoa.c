#include "libft.h"

static int	int_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*number_converter(char *alc, int n, int i_len, int sign)
{
	while (i_len-- > sign)
	{
		if (n < 0 && n > -2147483648)
			alc[i_len] = '0' + n % 10 * (-1);
		else
			alc[i_len] = '0' + n % 10;
		n = n / 10;
	}
	return (alc);
}

static int	check(char *alc, int sign, int n)
{
	if (n < 0)
	{
		alc[0] = '-';
		sign = 1;
	}
	else
		sign = 0;
	return (sign);
}

char	*ft_itoa(int n)
{
	char	*alc;
	int		i_len;
	int		sign;

	sign = 1;
	i_len = int_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	alc = (char *)malloc(sizeof(char) * (i_len + 1));
	if (!alc)
		return (NULL);
	alc[i_len] = '\0';
	sign = check(alc, sign, n);
	return (number_converter(alc, n, i_len, sign));
}
