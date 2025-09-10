#define MAX_STACK_SIZE 3

typedef struct _STACK
{
    int ele[MAX_QUEUE_SIZE];
    int count;
}stack;

void push(stack*, int num);
int pop(stack*);
int peek(stack*);
void stackIsempty(stack*);
int stackGetSize(stack*);
void stackPrintValues(stack*);