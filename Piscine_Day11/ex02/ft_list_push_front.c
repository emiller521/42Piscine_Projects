
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list_ptr;

	if (*begin_list)
	{
		list_ptr = ft_create_elem(data);
		if (list_ptr)
		{
			list_ptr->next = (*begin_list);
			(*begin_list) = list_ptr;
		}
	}
	else
		*begin_list = ft_create_elem(data);
}
