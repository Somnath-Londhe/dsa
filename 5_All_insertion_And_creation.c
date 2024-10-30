#include<stdio.h>
#include<stdlib.h>
struct node
{
    int  data;
    struct node *next;
}*head=NULL;
void traveles()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("element:-%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int  frist(int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    head=ptr;

}
void cretion(int data){
    struct node *temp,*p;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    if (head==NULL)
    {
        head=temp;

    }else
    {
        p=head;
        while (p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        
    }
    
    
}
int main()
{
     printf("after insertion in ll \n");
    cretion(1);
    cretion(2);
    cretion(3);
    cretion(4);
    traveles(); 
    frist(122);
    traveles(); 

     return 0;
}
