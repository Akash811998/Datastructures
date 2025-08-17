//linked list

#include "main.h"

s_node *head= NULL;


int main()
{
   head = LL_singly_init(head,"First123");
   head=LL_singly_insert_node(head,"second",2);
   head=LL_singly_insert_node(head,"third",3);
   head=LL_singly_insert_node(head,"fourth",2);
   printf("Number of Nodes in Singly list are: %d\n", LL_singly_count_nodes(head));
    LL_singly_display_nodes(head);
   
  //  head=LL_singly_delete_node( 3,head);
  //  head=LL_singly_delete_node( 2,head);
   LL_singly_search_node(head,"fourth");
    printf("Number of Nodes in Singly list are: %d\n", LL_singly_count_nodes(head));
    LL_singly_display_nodes(head);
    return 0;
}


