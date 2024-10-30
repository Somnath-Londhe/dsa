#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;

} *head = NULL;
void creation(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        // head->next = temp;
    }
    else
    {
        do
        {
            p = p->next;

        } while (p->next != head);
        p->next = temp;
        temp->next = head;
    }
}
void bigadd(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    temp->data = data;
    temp->next = head;
    do
    {
        p = p->next;
    } while (p->next != head);
    p->next = temp;
    temp->next = head;
    head = temp;
}
void end(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    temp->data = data;
    do
    {
        p = p->next;
    } while (p->next != head);
    p->next = temp;
    temp->next = head;
}
void pos(int pos, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    temp->data = data;
    if (pos == 1)
    {
        bigadd(data);
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    } 
}
void delfrist()
{
    struct node *p = head;
    struct node *temp = head;
    do
    {
        p = p->next;    
    } while (p->next != head);
    p->next = head->next;
    head = head->next;
    free(temp);
    
}
void delectpos(int pos){
    struct node *temp=head;
    struct node *p=head->next;

    for (int i = 1; i < pos-1; i++)
    {
        temp=temp->next;
        p=p->next;
    }
    temp->next=p->next;
    free(p);
    
}
void delectend(){
    struct node *temp=head;
    struct node *p=head->next;

    
    do{
        temp=temp->next;
        p=p->next;
    }while(p->next!=head);
    temp->next=head;
    free(p);
    
}
void display()
{
    struct node *temp = head;
    do
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    } while (temp != head);
}
int main()
{
    printf("\n");
    creation(1);
    creation(2);
    creation(3);
    creation(4);
    display();

    //  bigadd(12);
    printf("\nbefour action\n");
    // end(34);
    // pos(4,5434263);
    // delectpos(2);
    delectend();
    // delfrist();/
    display();

    return 0;
}
