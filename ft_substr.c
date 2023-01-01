/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervyilm <mervyilm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:58:22 by mervyilm          #+#    #+#             */
/*   Updated: 2022/12/24 17:25:49 by mervyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*alc;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	alc = (char *)malloc(sizeof(char) * (len + 1));
	if (!alc)
		return (NULL);
	while ((i < len) && (s[i + start] != 0))
	{
		alc[i] = s[i + start];
		i++;
	}
	alc[i] = 0;
	return (alc);
}
