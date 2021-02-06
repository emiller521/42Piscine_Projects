
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (!(*begin_list))
		return ;
	if ((*begin_list)->next)
		ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
	if (!((*cmp)((*begin_list)->data, data_ref)))
		*begin_list = (*begin_list)->next;
}
