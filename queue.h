
#define MAX_QUEUE_SIZE 3

typedef struct _queue
{
    int ele[MAX_QUEUE_SIZE];
    int count;
}queue;


void Q_enqueue(queue*, int num);
int Q_dequeue(queue*);
int Q_getfront(queue*);
int Q_getrear(queue*);
int Q_getsize(queue*);
void Q_isempty(queue*);
void Q_printvalues(queue*);
