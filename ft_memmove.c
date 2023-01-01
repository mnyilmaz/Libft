/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervyilm <mervyilm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:28:38 by mervyilm          #+#    #+#             */
/*   Updated: 2022/12/24 16:25:26 by mervyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d1;
	unsigned char	*s1;
	unsigned char	*d2;
	unsigned char	*s2;

	d1 = (unsigned char *)dst;
	s1 = (unsigned char *)src;
	d2 = (unsigned char *)dst + (len - 1);
	s2 = (unsigned char *)src + (len - 1);
	if (dst == src || len == 0)
		return (dst);
	if (dst > src)
		while (len--)
			*d2-- = *s2--;
	else
		while (len--)
		*d1++ = *s1++;
	return (dst);
}
