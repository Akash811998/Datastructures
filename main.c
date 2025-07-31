//linked list

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//Macros
#define DATA_LENGTH 10 

//node variable declaration
typedef struct _node
{
    char data[DATA_LENGTH];
    struct _node *next_node;
}__attribute__((packed)) node;

//private variables
node *head= NULL;
uint32_t count=0;

bool LL_init(char *data)
{
    node *new=(node*)malloc(sizeof(node));
    uint32_t len;
    len=strlen(data);
    if (new == NULL || (len>DATA_LENGTH))  //make sure that the data length is less than 10 else it will lead to memory corruption
        return 0;
    
    if(head == NULL)
    {
        memcpy( new->data,data, len); 
        new->next_node=NULL;
        head=new;
        count++;
    }
    printf("%p\n",new);
    printf("%s\n",head->data);
    printf("%p",head->next_node);
    return 1;
}

int main()
{
    
    // printf("%p\n",&head);
    // printf("%d\n",sizeof(head->p));
    // printf("%d\n",sizeof(node));
   LL_init("Whoayou");

    return 0;
}