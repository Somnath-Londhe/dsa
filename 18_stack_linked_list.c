#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *top = NULL;
void add(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if (top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
}
void deletion()
{
    struct node *ptr = top;
    printf("elenemt  :- %d",ptr->data);
     top= top->next;
    free(ptr);
}
void display()
{
    struct node *ptr = top;
    while (ptr != NULL)
    {
        printf("%d\n \t",ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    display();
    printf("\n");

    deletion();
    deletion();
    deletion();
    deletion();
    deletion();
    display();
    return 0;
}
