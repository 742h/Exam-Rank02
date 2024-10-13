#include <stdlib.h>
#include "ft_list.h"
#include <string.h>
#include <stdio.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (!begin_list || !*begin_list)
		return;
	t_list *hs = *begin_list;
	if (cmp(hs->data, data_ref) == 0)
	{
		*begin_list = hs->next;
		free(hs);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		hs = *begin_list;
		ft_list_remove_if(&hs->next, data_ref, cmp);
	}
}

