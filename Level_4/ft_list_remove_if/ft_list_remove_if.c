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














// int cmp(void *data1, void *data2) {
//     return strcmp((char *)data1, (char *)data2);
// }

// t_list *create_node(char *data) {
//     t_list *new_node = (t_list *)malloc(sizeof(t_list));
//     new_node->data = data;
//     new_node->next = NULL;
//     return new_node;
// }

// void print_list(t_list *head) {
//     t_list *current = head;
//     while (current != NULL) {
//         printf("%s -> ", (char *)current->data);
//         current = current->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     // Creating a sample list: "apple" -> "banana" -> "apple" -> "cherry"
//     t_list *head = create_node("apple");
//     head->next = create_node("banana");
//     head->next->next = create_node("apple");
//     head->next->next->next = create_node("cherry");

//     printf("Original list:\n");
//     print_list(head);

//     // Remove nodes with data "apple"
//     ft_list_remove_if(&head, "apple", cmp);

//     printf("List after removal:\n");
//     print_list(head);

//     // Free the remaining nodes
//     while (head != NULL) {
//         t_list *temp = head;
//         head = head->next;
//         free(temp);
//     }

//     return 0;
// }