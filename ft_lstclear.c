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
