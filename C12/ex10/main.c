#include "ft_list.h"
#include <unistd.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
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

	ft_list_foreach_if(list, ft_put_elem, "test", ft_strcmp);

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
