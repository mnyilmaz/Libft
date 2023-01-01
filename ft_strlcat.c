/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervyilm <mervyilm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:36:29 by mervyilm          #+#    #+#             */
/*   Updated: 2022/12/25 11:37:09 by mervyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;
	size_t	len;

	dstlen = ft_strlen(dst);
	len = dstlen;
	i = 0;
	if (!dst && !dstsize)
		return (ft_strlen(src));
	if (dstsize < dstlen + 1)
		return (ft_strlen(src) + dstsize);
	while (src[i] && (dstsize - dstlen - 1 != 0) && dstsize--)
		dst[len++] = src[i++];
	dst[len] = 0;
	return (dstlen + ft_strlen(src));
}
