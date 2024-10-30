#include <stdio.h>
#include <stdlib.h>
struct node
{
    /* data */
    int data;
    struct node *left;
    struct node *right;
};
struct node *cretion(int data)
{
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    nn->data = data;
    nn->left = NULL;
    nn->right = NULL;
}
void Inorder(struct node *root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        printf("%d\t", root->data);
        Inorder(root->right);
    }
}

int main()
{
    struct node *p = cretion(4);
    struct node *p1 = cretion(1);
    struct node *p2 = cretion(6);
    struct node *p3 = cretion(5);
    struct node *p4 = cretion(2);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    Inorder(p);
    return 0;
}
