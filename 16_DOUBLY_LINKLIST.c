#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct nod *next;
    struct nod *prev;
} *head = NULL;
void creation(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    temp->data = data;
    // temp->next = NULL;
    // temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
        temp->prev = p;
    }
}
void bigatinsertion(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    temp->prev = NULL;
    head->prev = temp;
    head = temp;
} 
// void mid(int data, int pos)
// {
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     struct node *p = head;
//     temp->data = data;
//     temp->next = NULL;
//     temp->prev = NULL;
//     for (int i = 0; i < pos - 1; i++)
//     {
//         p = p->next;
//     }

//     temp->prev = temp;
//     temp->next = p;
//     temp->next = temp;
//     temp->next->prev = temp;
// }
void end(int data)
{
    struct node *p = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = temp;
    temp->next = p;
    temp->next = NULL;
}
void dilectbig()
{
    struct node *temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}
void delectpos(int pos)
{
    struct node *p = head, *q = head->next;
    for (int i = 1; i < pos - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    q->next = q->prev = q->prev;
    free(q);
}
void delectend()
{
    struct node *temp = head, *p = head->next;
    while (p->next != NULL)
    {
        p = p->next;
        temp = temp->next;
    }
    temp->next = NULL;
    free(p);
}
void display()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    printf(" ok \n");
}
int main()
{
    creation(1);
    creation(2);
    creation(3);
    creation(4);
    creation(5);
    display();
    // bigatinsertion(41);
    //  mid(22,2);
    //  end(22);
    // delectpos(2);
    //  dilectbig();
    delectend();

    display();

    return 0;
}