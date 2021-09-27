#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		size;

	tmp = begin_list;
	size = 0;
	while (tmp)
	{
		++size;
		tmp = tmp->next;
	}
	return (size);
}
