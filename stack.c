#include "main.h"


void push(stack *s, int num)
{
    if(s->count + 1 > MAX_STACK_SIZE)
    {
        printf("The stack is full and nothing is added\n\r");
        return;
    }
    s->ele[s->count++]=num;
}
int pop(stack *s)
{
    if(s->count==0)
    {
        printf("stack is empty\n\r");
        goto a;
    }
    else if((s->count-1)==0)
    {
        return s->ele[--s->count];
    }                 
    return s->ele[--s->count];
    a:
}
int peek(stack *s)
{
    if(s->count<=0)
    {
        printf("No elements in the stack\n\r");
        goto a;
    }
    return s->ele[s->count-1];
    a:
}
void stackIsempty(stack *s)
{
    if(s->count==0)
        printf("stack is empty\n\r");
    else    
        printf("stack is not empty\n\r");
}
int stackGetSize(stack *s)
{
    return s->count;
}
void stackPrintValues(stack *s)
{
    int temp=s->count-1;
    if(temp<0)
        printf("Stack is empty\n\r");
    else
    {
        printf("The Stack values from top to bottom are: \n\r");
        while(temp>=0)
         {
            printf("%d\n\r",s->ele[temp--]);
        }
    }
}