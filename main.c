//linked list

#include "main.h"

s_node *head= NULL;
queue q;
stack s;

int main()
{
//    head = LL_singly_init(head,"First123");
//    head=LL_singly_insert_node(head,"second",2);
//    head=LL_singly_insert_node(head,"third",3);
//    head=LL_singly_insert_node(head,"third",2);
//    printf("Number of Nodes in Singly list are: %d\n", LL_singly_count_nodes(head));
   
//   //  head=LL_singly_delete_node( 3,head);
//   //  head=LL_singly_delete_node( 2,head);
//    LL_singly_search_node(head,"fourth");
//     printf("Number of Nodes in Singly list are: %d\n", LL_singly_count_nodes(head));
//     LL_singly_display_nodes(head);
//     LL_singly_search_in_all_nodes(head,"third");

    // Q_enqueue(&q,3);
    // Q_enqueue(&q,4);
    // Q_enqueue(&q,5);
    // printf("the dequeued value: %d\n\r",Q_dequeue(&q));
    // printf("the dequeued value: %d\n\r",Q_dequeue(&q));
    // printf("%d\n",q.count);
    // Q_printvalues(&q);
    // printf("front of queue %d\n",Q_getfront(&q));
    //  printf("rear of queue %d\n",Q_getrear(&q));
    // printf("size  of queue %d\n",Q_getsize(&q));


    push(&s,3);
    push(&s,4);
    push(&s,5);
    pop(&s);
    pop(&s);
    push(&s,6);
    printf("The peaked value %d\n\r",peek(&s));
    stackPrintValues(&s);
    push(&s,7);
    push(&s,8);
    
    stackPrintValues(&s);

    return 0;
}


