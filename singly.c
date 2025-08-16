#include "main.h"

//private variables

uint32_t s_count=0;

/*
Return pointer of head if successfully node is initialised else return 0 if the node was not dynamically created
*/
s_node* LL_singly_init(s_node *head,char *data)
{
    s_node *new=(s_node*)malloc(sizeof(s_node));
    uint8_t len;
    len=strlen(data);
    printf("len: %d\n",len);
    if (new == NULL || (len>DATA_LENGTH-1))  // -1 because a null character has to be added at last
    {
        printf("Space cannot be created in the heap or data is greater than 10 characters\n");
        return 0;
    }
    
    if(head == NULL)
    {
        memcpy(new->data,data,len); 
        new->data[len]='\0';
        new->next_node=NULL;
        head=new;
        s_count++;
    }
    printf(" \" %s \" node created\n",new->data);
    return head;
}

bool LL_singly_insert_node(s_node *start, char* data)
{
    s_node *new=(s_node*)malloc(sizeof(s_node));
    uint8_t len;
    len=strlen(data);
    printf("len: %d\n",len);
    if(new==0 || (len>DATA_LENGTH-1)) // -1 because a null character has to be added at last
    {
        printf("Space cannot be created in the heap or data is greater than 10 characters\n");
        return 0;
    }
    if(LL_singly_count_nodes(start)==0)
    {
        printf("The singly linked list is not initialised yet, first init the Linked list\n");
        return 0;
    }
    while(start)
    {
        if(start->next_node == 0)
            break;
         start=start->next_node;
    }
    memcpy(new->data,data, len); 
    new->data[len]='\0'; //add a null character at last

    new->next_node=NULL;
    start->next_node=new;
    
    printf("\"%s\" node created\n",new->data);
    return 1;
}

void LL_singly_display_nodes(s_node *start)
{
    printf("\n\nSingly Linked list nodes data values are as follows:\n");
    while(start!=0)
    {
        printf("%s",start->data);        
        if(start->next_node==0)
             break;    
        start=start->next_node;
        printf(" -> ");
    }
    printf("\n");
}

uint32_t LL_singly_count_nodes(s_node *start)
{
    uint32_t count=0;

    while(start!=0)
    {
        count++;
        start=start->next_node;
    }
    return count;
}