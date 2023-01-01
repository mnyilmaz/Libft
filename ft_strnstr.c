/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervyilm <mervyilm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:22:10 by mervyilm          #+#    #+#             */
/*   Updated: 2022/12/25 13:02:04 by mervyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
