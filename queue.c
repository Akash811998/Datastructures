
//Can be implemented uisng linked list as well which is way easier as in arrays removing or adding an element invloves shifting other values but in 
//linked list we only need to update the head pointer
// but since it is stored in th heap I am trying to use queue here
// I have tried to 

#include "main.h"


//elements are added to the sequentially
void Q_enqueue(queue *q,int num)
{
    if((q->count) + 1 > MAX_QUEUE_SIZE)
    {
        printf("The queue is full and nothing is added\n\r");
        return;
    }
    q->ele[q->count++]=num;

}

//as it is a queue, elements are deleted from the starting elements, hence we neeed to shift elements
int Q_dequeue(queue *q)
{
    int c=0,temp=0;
    int ret= q->ele[0];
    if(q->count==0)
    {
        printf("Queue is empty\n\r");
        goto a; //Can't return  nothing when you have a return datatype, hence an hack :)
    } 
    else if(q->count==1)
        return ret;

    while(c < q->count)
    {
        q->ele[c]=q->ele[c+1];
        c++;
    }      
    q->count--;
    return ret;
    a:
}


int Q_getfront(queue *q)
{
    if(q->count!=0)
        return q->ele[0];
    printf("Queue is empty\n\r");
    return 0;

}
int Q_getrear(queue *q)
{
       if(q->count!=0)
        return q->ele[q->count-1];
    printf("Queue is empty\n\r");
    return 0;
    
}
int Q_getsize(queue *q)
{
     return q->count;
}
void Q_isempty(queue *q)
{
    if(q->count==0)
        printf("queue is empty\n\r");
    else
         printf("queue is not empty\n\r");
}

void Q_printvalues(queue *q)
{
    int temp=0;
    while( temp < q->count)
    {
        if(temp+1 == q->count)
            printf("%d\n\r",q->ele[temp++]);
        else
            printf("%d->",q->ele[temp++]);
    }


}