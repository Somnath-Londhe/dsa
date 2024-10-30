#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void Travasal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf(" Element::%d\n",ptr->data);
        ptr = ptr->next;
    }
}
int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct node *top)
{
    struct node *n = (struct node *)malloc(sizeof(struct node *));

    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top, int x)
{
    if (isfull(top))
    {

        printf("stack is the owerflow");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node *));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
int pop(struct node *tp)
{
    if (isempty(top))
    {

        printf("stack is the underflow");
    }
    else
    {
        struct node *n = tp;
        top = tp->next;
        int x = n->data;
        free(n);
        return x;
    }
}
int main()
{

    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
    int element = pop(top);
    printf(" poped element in the %d\n", element);
    Travasal(top);

    return 0;
}
