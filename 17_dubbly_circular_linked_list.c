#include <stdio.h>
#include <stdlib.h>
struct node
{

    int data;
    struct node *next;
    struct node *prev;

} *head = NULL;

void creation(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    temp->data = data;
    // temp->next=NULL;
    // temp->prev=NULL;
    if (head == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        head = temp;
    }
    else
    {
        do
        {
            p = p->next;
        } while (p->next != head);
        p->next = temp;
        temp->prev = p;
        temp->next = head;
    }
}
void display()
{
    struct node *ptr = head;
    do
    {
        printf(" tis is the befour element :-%d\n", ptr->data);
        ptr = ptr->next;

    } while (ptr != head);
}
void big(int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    temp->data=data;
    do
    {
        p=p->next;
    } while (p->next!=head);
    p->next=temp;
    temp->prev=p;
    temp->next=head;
    head=temp;
}
void end(int data){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    temp->data=data;
    do
    {
        p=p->next;
    } while (p->next!=head);
    p->next=temp;
    temp->prev=p;
    temp->next=head;
    
}
void pos(int pos,int data){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    temp->data=data;
    for (int  i = 1; i < pos-1; i++)
    {
        // temp=temp->next;
        p=p->next;
    }
    temp->next=p->next;
    temp->prev=p;
    p->next=temp;    
}
void delect(){
    struct node *temp = head, *p = head;
    do
    {
        temp=temp->next;
    } while (temp->next!=head);
    temp->next=head->next;
    head->next->prev=temp;
    head=head->next;
    free(p);


}
void endin(){
    struct node *temp = head,*p = head->next;
    do
    {
        temp=temp->next;
        p=p->next;
    } while (p->next!=head);
temp->next=head;
head->prev=p;
free(p);
}

void possin(int pos){
    struct node *temp = head,*p = head->next;
    for (int i =1 ; i < pos-1; i++)
    {
       temp= temp->next;
       p= p->next;
    }
    temp->next=p->next;
    p->prev->prev=temp;
    free(p);
}
int main()
{
    creation(1);
    creation(2);
    creation(3);
    creation(4);
    display();
    printf(" tis is the befour element\n");
    // big(12);
    // end(5);
    //  delect();
    // endin();
    possin(2);
//    pos(2,435);
    display();

    return 0;
}

    