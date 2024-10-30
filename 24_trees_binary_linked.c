#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int data){ 
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data=data;
    p->left = NULL;
    p->right = NULL;
    return p;
    // construting the 
}

int main()
{
    // // construting the root node
    // struct node *p = (struct node *)malloc(sizeof(struct node));
    // p->data=2;
    // p->left = NULL;
    // p->right = NULL;
    // // construting the second node

    // struct node *p1 = (struct node *)malloc(sizeof(struct node));
    // p->data=1;
    // p1->left = NULL;
    // p1->right = NULL;
    // // construting the thred node

    // struct node *p2 = (struct node *)malloc(sizeof(struct node));
    // p->data=3;
    // p2->left = NULL;
    // p2->right = NULL;

    //  coneting the node of root node
    struct node *p=create(2);
    struct node *p1=create(1);
    struct node *p2=create(3);
    p->left=p1;
    p->right=p2;


    return 0;
}
