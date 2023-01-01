/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervyilm <mervyilm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:50:45 by mervyilm          #+#    #+#             */
/*   Updated: 2022/12/25 11:19:57 by mervyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*porter;
	t_list	*bridge;

	bridge = 0;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		porter = ft_lstnew(f(lst->content));
		if (!porter)
		{
			ft_lstclear(&bridge, del);
			return (0);
		}
		ft_lstadd_back(&bridge, porter);
		lst = lst -> next;
	}
	return (bridge);
}
