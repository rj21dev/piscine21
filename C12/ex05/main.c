#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_strs(int size, char **strs);

void	print_list(t_list *list)
{
	for (t_list *tmp = list; tmp != NULL; tmp = tmp->next)
		printf("%s\n", (char *) tmp->data);
}

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

int	main(int argc, char **argv)
{
	t_list	*list;

	list = ft_list_push_strs(argc, argv);

	print_list(list);
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
