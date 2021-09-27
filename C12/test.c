#include <stdlib.h>
#include <stdio.h>

typedef struct	node
{
	struct node	*next;
	void		*data;
}				node;

node	*create_node(char *text)
{
	node	*n;

	n = (node *) malloc(sizeof(node));
	if (n == NULL)
		return (NULL);
	n->data = text;
	n->next = NULL;
	return (n);
}

void	print_list(node *list)
{
	for (node *tmp = list; tmp != NULL; tmp = tmp->next)
		printf("%s\n", (char *) tmp->data);
}

void	free_list(node *list)
{
	node	*tmp;
	
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
}

int	main(void)
{
	node	*list;
	
	list = create_node("lol");
	list->next = create_node("kek");
	list->next->next = create_node("wow");
	list->next->next->next = create_node("test");
	list->next->next->next->next = create_node("best");

	print_list(list);

	free_list(list);
}
