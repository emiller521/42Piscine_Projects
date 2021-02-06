
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *list_ptr;

	list_ptr = (t_list *)malloc(sizeof(t_list));
	if (list_ptr)
	{
		list_ptr->data = data;
		list_ptr->next = NULL;
	}
	return (list_ptr);
}
