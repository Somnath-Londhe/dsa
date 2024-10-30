#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int i;
    int o;
    int* arr;
};
int full(struct queue  *q){
    if (q->i == q->size-1)
    {
        return 1;
        
    }else
    {
        return 0;
    }
    
}
int empty(struct queue  *q){
    if (q->i == q->o)
    {
        return 1;
        
    }else
    {
        return 0;
    }
    
}

void enqueu(struct queue* q,int val){
if (full(q)){
    printf("queue is the orverflow");
}else
{
    q->i++;
    q->arr[q->i]=val;
    
}
}
int  dequeu(struct queue* q){

if (empty(q)){
    printf("queue is the underflow");
}else
{
    // q->i=q->i+1;
    q->o++;
   return q->arr[q->o];
    
}
}
int main()
{
    struct queue q; 
    q.size=3;
    q.i=q.o=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
     
    //q.arr=
    
    enqueu(&q,3);
    enqueu(&q,4);
    enqueu(&q,5);
    // printf(" remove the element  in the queue %d\n",dequeu(&q));
    // printf(" remove the element  in the queue %d\n",dequeu(&q));
    // printf(" remove the element  in the queue %d\n",dequeu(&q));
    enqueu(&q,366);
    enqueu(&q,476);
    enqueu(&q,566);
    // if (full(&q))
    // {
    //     printf("queue is the full\n");
    // }
    // if(empty(&q))
    // {
    //     printf("queue is the empty\n");
    // }
    
   // printf("%d",enqueu(&q,1));
     return 0;
}
