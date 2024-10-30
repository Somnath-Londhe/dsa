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
int bts(struct node *root)
{
    static struct node *prev;
    if (root != NULL)
    {
        if (!bts(root->left))
        {
            return 0;
        }
    
    if (prev != NULL && root->data <= prev->data)
    {
    return 0;
    }
    prev = root;
    return bts(root->right);
}
    else
    {
    return 1;
        
    }
    
}
int main()
{
    struct node *p = cretion(10);
    struct node *p1 = cretion(7);
    struct node *p2 = cretion(15);
    struct node *p3 = cretion(2);
    struct node *p4 = cretion(8);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    Inorder(p);
    printf("\n");
    printf("%d",bts(p));    
    return 0;
}
