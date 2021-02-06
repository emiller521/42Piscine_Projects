
#include "ft_list.h"

void	ft_list_push_front05(t_list **begin_list, void *data)
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

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list_ptr;

	list_ptr = 0;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front05(&list_ptr, av[i]);
		i++;
	}
	return (list_ptr);
}
