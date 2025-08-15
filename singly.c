#include "main.h"

//private variables

uint32_t s_count=0;


/*

Return pointer of head if successfully node is initialised else return 0 if the node was not dynamically created

*/
s_node* LL_init(s_node *head,char *data)
{
    s_node *new=(s_node*)malloc(sizeof(s_node));
    uint32_t len;
    len=strlen(data);
    if (new == NULL || (len>DATA_LENGTH))  //make sure that the data length is less than 10 else it will lead to memory corruption
        return 0;
    
    if(head == NULL)
    {
        memcpy( new->data,data, len); 
        new->next_node=NULL;
        head=new;
        s_count++;
    }
    printf("%p\n",new);
    printf("%s\n",head->data);
    return head;
}

uint32_t LL_count_nodes(s_node *start)
{
    uint32_t count=0;
   // printf("%p\n",start);
    while(start!=0)
    {
        count++;
        start=start->next_node;
    }
    return count;
}