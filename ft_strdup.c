/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervyilm <mervyilm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:28:15 by mervyilm          #+#    #+#             */
/*   Updated: 2022/12/24 16:50:08 by mervyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*mlc;
	char	*ptr;

	len = ft_strlen(s1);
	mlc = (char *)malloc(len + 1);
	if (!mlc)
		return (NULL);
	ptr = mlc;
	while (*s1)
		*ptr++ = *s1++;
	*ptr = '\0';
	return (mlc);
}
