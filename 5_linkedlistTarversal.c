#include <stdio.h>
#include <malloc.h>
struct node 
{
    int data;
    struct node *next;
};
void Travasal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element::%d\n",ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    
    return 0;
}
