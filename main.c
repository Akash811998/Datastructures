//linked list

#include "main.h"

s_node *head= NULL;


int main()
{
   head = LL_init(head,"Whoayou");
    printf("%d\n", LL_count_nodes(head));
    return 0;
}


