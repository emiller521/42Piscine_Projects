
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current_list;
	t_list	*prev_list;
	t_list	*next_list;

	prev_list = 0;
	current_list = *begin_list;
	if (!current_list)
		return ;
	while (current_list->next)
	{
		next_list = current_list->next;
		current_list->next = prev_list;
		prev_list = current_list;
		current_list = next_list;
	}
	current_list->next = prev_list;
	*begin_list = current_list;
}
