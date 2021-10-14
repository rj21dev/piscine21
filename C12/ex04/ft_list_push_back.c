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
