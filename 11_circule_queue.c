#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;

    int i;
    int o;
    int *arr;
};
// int full(struct queue  *q){
//     if (q->(i+1)&q->size == q->)
//     {
//         return 1;

//     }else
//     {
//         return 0;
//     }

// }
// int empty(struct queue  *q){
//     if (q->i == q->o)
//     {
//         return 1;

//     }else
//     {
//         return 0;
//     }

// }

void enqueu(struct queue *q, int val)
{
    if ((q->i + 1) % q->size == q->o)
    {
        printf("queue is the full\n");
    }
    else
    {

        q->i = (q->i + 1) % q->size;
        q->arr[q->i] = val;
        printf("enqueu the Element::-%d\n", val);
    }
}
int dequeu(struct queue *q)
{

    if (q->i == q->o)
    {
        printf("queue is the empty\n");
    }
    else
    {

        q->o = (q->o + 1) % q->size;
        return q->arr[q->o];
    }
}
int main()
{
    struct queue q;
    q.size = 4;
    q.i = q.o = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueu(&q, 3);
    enqueu(&q, 4);
    enqueu(&q, 5);
    printf(" remove the element  in the queue %d\n", dequeu(&q));
    printf(" remove the element  in the queue %d\n", dequeu(&q));
    // printf(" remove the element  in the queue %d\n", dequeu(&q));
    enqueu(&q, 5);
    enqueu(&q, 5);
    enqueu(&q, 5);    // if (full(&q))
    // {
    //     printf("queue is the full\n");
    // }
    // if (empty(&q))
    // {
    //     printf("queue is the empty\n");
    // }

    // printf("%d",enqueu(&q,1));
    return 0;
}
