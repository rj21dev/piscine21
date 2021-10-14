#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

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

int	main(void)
{
	t_list	*list;
	
	/* fill the list */
	list = ft_create_elem("lol");
	list->next = ft_create_elem("kek");
	list->next->next = ft_create_elem("wow");
	list->next->next->next = ft_create_elem("test");
	list->next->next->next->next = ft_create_elem("best");

	print_list(list);

	printf("\n");
	print_list(ft_list_at(list, 3));

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
