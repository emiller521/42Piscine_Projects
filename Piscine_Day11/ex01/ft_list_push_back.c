
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list_ptr;

	list_ptr = *begin_list;
	if (list_ptr)
	{
		while (list_ptr->next)
			list_ptr = list_ptr->next;
		list_ptr->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
