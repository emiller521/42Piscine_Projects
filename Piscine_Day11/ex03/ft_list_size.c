
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list_ptr;
	int		i;

	i = 0;
	list_ptr = begin_list;
	while (list_ptr)
	{
		list_ptr = list_ptr->next;
		i++;
	}
	return (i);
}
