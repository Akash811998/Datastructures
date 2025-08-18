#include "main.h"

// private variables

uint32_t s_count = 0;

/*
Return pointer of head if successfully node is initialised else return 0 if the node was not dynamically created
*/
s_node *LL_singly_init(s_node *head, char *data)
{
    if (head != NULL) // if Linke dlist is already initialised, then don't initialise the linked list as it will lead to memory leaks
    {
        printf("Linked list already initialised\n");
        return head;
    }
    s_node *new = (s_node *)malloc(sizeof(s_node));
    uint8_t len;
    len = strlen(data);
    if (new == NULL || (len > DATA_LENGTH - 1)) // -1 because a null character has to be added at last
    {
        printf("Space cannot be created in the heap or data is greater than 10 characters\n");
        return 0;
    }

    if (head == NULL)
    {
        memcpy(new->data, data, len + 1); // len+1 : add a null character at last
        new->next_node = NULL;
        head = new;
        s_count++;
    }
    printf(" \" %s \" node created\n", new->data);
    return head;
}

/*
    Instead of this implementation we can also add addign elements ar the start instead of end
    to get O(1) time complexity instead of O(n)
*/
s_node* LL_singly_insert_node(s_node *start, char *data, uint32_t loc)
{
    s_node *new = (s_node *)malloc(sizeof(s_node));
    uint8_t len;
    len = strlen(data);
    if (new == 0 || (len > DATA_LENGTH - 1)) // -1 because a null character has to be added at last
    {
        printf("Space cannot be created in the heap or data is greater than %d characters\n", DATA_LENGTH);
        return 0;
    }
    if (LL_singly_count_nodes(start) == 0)
    {
        printf("The singly linked list is not initialised yet, first init the Linked list\n");
        return 0;
    }
    memcpy(new->data, data, len + 1); // len+1 : add a null character at last
    new->next_node = NULL;

    s_node* prev=NULL;
    s_node* current=start;

    if (loc <= LL_singly_count_nodes(current)) //place it if present somewhere in start or middle of linked list
    {
        
        if(loc==1)
        {
            new->next_node=current;
            printf("\"%s\" node created\n", new->data);
            return new; 
        }
        while (loc != 1)
        {
            prev=current;
            current=current->next_node;
            loc--;
        }
        prev->next_node=new;
        new->next_node=current;
    }
    else //add at the end of the linked list
    {
        while (current)
        {
            if (current->next_node == 0)
                break;
            current = current->next_node;
        }
         current->next_node = new;
    }
    printf("\"%s\" node created\n", new->data);
    return start;
}

void LL_singly_display_nodes(s_node *start)
{
    if (start == NULL)
    {
        printf("No nodes available to show\n");
        return;
    }
    printf("\n\nSingly Linked list nodes data values are as follows:\n");
    while (start != 0)
    {
        printf("%s", start->data);
        if (start->next_node == 0)
            break;
        start = start->next_node;
        printf(" -> ");
    }
    printf("\n");
}

s_node *LL_singly_delete_all(s_node *head)
{
    s_node *temp = head;
    // s_node *next_node;
    if (head == NULL)
    {
        printf("There are no elements to delete\n");
        return head;
    }
    while (temp != NULL)
    {
        temp = temp->next_node;
        free(head);
        // free((s_node*)head);
        head = temp;
    }
    return NULL;
}

s_node *LL_singly_delete_node(uint32_t num, s_node *head)
{
    s_node *prev = NULL;
    s_node *current = NULL;
    s_node *next = head;
    uint32_t count = 0;

    if (num == 1)
    {
        free(next);
        return next->next_node;
    }

    while (count < num)
    {
        prev = current;
        current = next;
        next = next->next_node;
        count++;
    }
    prev->next_node = current->next_node;
    free(current);
    return head;
}
uint32_t LL_singly_count_nodes(s_node *start)
{
    uint32_t count = 0;

    while (start != 0)
    {
        count++;
        start = start->next_node;
    }
    return count;
}

bool LL_singly_search_node(s_node* head,char* data)
{
    uint32_t count=1;
    while(head)
    {
        if(!strcmp(head->data,data))
        {
            printf("Found the node /' %s /' at position %d\n",data,count);
            return 1;
        }
        else
        {
            head=head->next_node;
            count++;
        }
    }
    printf("The node /' %s /' was not found!!!!!!!\n",data);
    return 0;
}


//Search for the data in all nodes and not just one
void LL_singly_search_in_all_nodes(s_node* head,char* data)
{
    uint32_t count=1;
    s_node* current=head;
    bool flag=0;

    while(current)
    {
        if(!strcmp(current->data,data))
        {
            printf("\"%s\" was found at node:%d\n",data,count);
            flag=1;
        }
            
        current=current->next_node;
        count++;
    }
    if(!flag)
        printf("\"%s\" was not found :( \n");

}