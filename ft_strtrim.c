/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervyilm <mervyilm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:00:13 by mervyilm          #+#    #+#             */
/*   Updated: 2022/12/24 17:23:32 by mervyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hide_n_seek(const char s1, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	f;
	int		len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	f = ft_strlen(s1) - 1;
	while (hide_n_seek(s1[i], set))
		i++;
	while (hide_n_seek(s1[f], set))
		f--;
	len = f - i + 1;
	return (ft_substr(s1, i, len));
}
