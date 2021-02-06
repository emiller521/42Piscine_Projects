
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (nbr > 0)
	{
		if (!list_ptr)
			return (0);
		list_ptr = list_ptr->next;
		nbr--;
	}
	return (list_ptr);
}
