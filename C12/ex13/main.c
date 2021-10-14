#include "ft_list.h"
#include <stdio.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);

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
	t_list	*list1;
	t_list	*list2;
	
	/* fill the list */
	list1 = ft_create_elem("lol_1");
	list1->next = ft_create_elem("kek");
	list1->next->next = ft_create_elem("wow");
	list1->next->next->next = ft_create_elem("test");
	list1->next->next->next->next = ft_create_elem("best");

	list2 = ft_create_elem("lol_2");
	list2->next = ft_create_elem("kek");
	list2->next->next = ft_create_elem("wow");
	list2->next->next->next = ft_create_elem("test");
	list2->next->next->next->next = ft_create_elem("best");

	print_list(list1);
	printf("\n");
	print_list(list2);

	ft_list_merge(&list1, list2);

	printf("\n");
	print_list(list1);

	free_list(list1);
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
