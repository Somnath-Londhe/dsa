#include <stdio.h>
#include <stdlib.h>
struct node *f = NULL;
struct node *r = NULL;
struct node
{
    int data;
    struct node *next;
};
void Travasal(struct node *ptr)
{
    printf("print the element in the queue\n");
    while (ptr != NULL)
    {
        printf("Element::%d\n",ptr->data);
        ptr = ptr->next;
    }
}

void  enqueue(int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("queue is the full\n");
    }
    else
    {
        ptr->data = val;
        ptr->next = NULL;
        if (f == NULL)
        {
            f = r = ptr;
        }
    
    else
    {
        r->next = NULL; 
        r = ptr;
    }

}
}
int  dequeue()
{
    struct node *ptr = f;
    int  val=-1;
    if (ptr == NULL)
    {
        printf("queue is the empty\n");
    }
   else
   {
    f=f->next;
    val=ptr->data;
    free(ptr);
   }
    return val;
   
}
int main()
{
    
    Travasal(f);
    enqueue(1);
    enqueue(2);
    printf("this is the element:-%d\n",dequeue());
    printf("this is the element:-%d\n",dequeue());
  
    Travasal(f);

    return 0;
}
