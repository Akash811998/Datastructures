//linked list

#include "main.h"

s_node *head= NULL;


int main()
{
   head = LL_singly_init(head,"First123");
   LL_singly_insert_node(head,"second");
   LL_singly_insert_node(head,"third");
   // printf("%d\n", LL_singly_count_nodes(head));
    LL_singly_display_nodes(head);
    return 0;
}


