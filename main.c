//linked list

#include "main.h"

s_node *head= NULL;


int main()
{
   head = LL_singly_init(head,"First123");
   LL_singly_insert_node(head,"second");
   LL_singly_insert_node(head,"third");
   printf("Number of Nodes in Singly list are: %d\n", LL_singly_count_nodes(head));
    LL_singly_display_nodes(head);
   //head= LL_singly_delete_all(head);
   head=LL_singly_delete_node( 3,head);
    printf("Number of Nodes in Singly list are: %d\n", LL_singly_count_nodes(head));
    LL_singly_display_nodes(head);
    return 0;
}


