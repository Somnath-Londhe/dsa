#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL;
void traveles()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("element:-%d\n", ptr->data);
        ptr = ptr->next;
    }
}
void frist(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = head;
    head = p;
}
// void index(int data,int index){
//     struct node *p = (struct node *)malloc(sizeof(struct node));
//     while (p->next !=index)
//     {
//         p=p->next;
//     }

// }
void delect_frist()
{
    struct node *p = head;
    head = head->next;
    free(p);
}
void delect_end()
{
    struct node *p = head;
    struct node *ptr = head->next;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        p = p->next;
    }
    p->next = NULL;
    // free(p);
}
void betwen(int pos){

struct node *p = head;
struct node *ptr = head->next;
  for (int i = 1; i <pos-1; i++)
    {
        ptr = ptr->next;
        p = p->next;
    }
      p->next=ptr->next;
      free(ptr);

}
void cretion(int data)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}
int main()
{
    printf("after insertion in ll \n");
    cretion(1);
    cretion(2);
    cretion(3);
    cretion(4578758);
    traveles();
    // frist(23);
    // delect_frist();
    betwen(3);
    //  delect_end();

    printf("befour insertion in ll\n");

    traveles();

    return 0;
}
