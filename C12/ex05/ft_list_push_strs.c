#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;
	
	if (*begin_list)
	{
		node = *begin_list;
		while (node->next)
			node = node->next;
		node->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;

	list = ((void *)0);
	while (size > 0)
		ft_list_push_back(&list, strs[--size]);
	return (list);
}
