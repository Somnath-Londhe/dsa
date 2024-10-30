#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
int display(struct stack *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:-%d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
struct stack* indexisfrist(struct stack *head){
     struct stack* ptr=head;
    head= head->next;
    free(ptr);
    return head;
     
     

}
struct stack* indexisbetween(struct stack *head,int index){
     struct stack *p=head;
     struct stack *q=head->next;
     int i=0;
     while (i< index-1)
     {
          p=p->next;
        q=q->next;
        i++;
     }
     
    //  for (int  i = 0; i < index-1; i++)
    //  {
    //   
    //  }
     p->next=q->next;
     free(q);
     return head;

}
struct stack* indexisEnd(struct stack *head){
     struct stack *p=head; 
     struct stack *q=head->next;
    
     while (q->next!=NULL)
     {
       p= p-> next;
       q=q->next;
    
     }
     
     p->next=NULL;
     free(q);
     return head;

}
struct stack* indexisAfter(struct stack *head,int value){
     struct stack *p=head;
     struct stack *q=head->next;
     while (q->data!=value && q->next!=NULL)
     {
        p=p->next;
        q=q->next;
     }
     
    if (q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    
     return head;

}

int main()
{
    struct stack *head;
    struct stack *two;
    struct stack *three;
    struct stack *four;
    head = (struct stack *)malloc(sizeof(struct stack *));
    two = (struct stack *)malloc(sizeof(struct stack *));
    three = (struct stack *)malloc(sizeof(struct stack *));
    four = (struct stack *)malloc(sizeof(struct stack *));
    head->data = 1;
    head->next = two;
    //**********************************
    two->data = 2;
    two->next = three;
    //**********************************
    three->data = 3;
    three->next = four;
    //**********************************
    four->data = 4;
    four->next = NULL;
    //********************************** 
    printf("this is the befor insretion\n");
    display(head);
   
    //head= indexisfrist(head);
     indexisbetween(head,1);
    // indexisEnd(head);
    //indexisAfter(head,3);
    printf("this is the after insretion\n");
    display(head);
    return 0;
}
