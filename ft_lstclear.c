/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervyilm <mervyilm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:49:56 by mervyilm          #+#    #+#             */
/*   Updated: 2022/12/24 18:19:45 by mervyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iter;

	if (!lst || !del)
		return ;
	iter = *lst;
	while (iter != NULL)
	{
		iter = iter -> next;
		ft_lstdelone(*lst, del);
		*lst = iter;
	}
}
