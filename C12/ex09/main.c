#include "ft_list.h"
#include <unistd.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	free_list(t_list *list)
{
	t_list	*tmp;
	
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
}

void	ft_put_elem(void *data)
{
	while (*((char *) data))
		write(1, (char *) data++, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	t_list	*list;
	
	/* fill the list */
	list = ft_create_elem("lol");
	list->next = ft_create_elem("kek");
	list->next->next = ft_create_elem("wow");
	list->next->next->next = ft_create_elem("test");
	list->next->next->next->next = ft_create_elem("best");

	ft_list_foreach(list, ft_put_elem);

	free_list(list);
}

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}
