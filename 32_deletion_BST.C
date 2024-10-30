#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *creation(int data)
{
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    nn->data = data;
    nn->left = NULL;
    nn->right = NULL;
}
struct node*inorderpredcers( struct node*root){
    root=root->left;
    while (root->right!=NULL)
    {
    root=root->right;
    
    }
    return root;
}
struct node* delectt(struct node *root, int key)
{
    struct node * ipre;
    // case:1 delect the  node for leaf node(last)
    // search the element in leaf node
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    if (key < root->data)
    {
        delectt(root->left, key);
    }
    else if (key > root->data)
    {
       root->right= delectt(root->right, key);
    }
    else
    {
        ipre = inorderpredcers(root);

        root->data = ipre->data;
       root->left= delectt(root->left, ipre->data);
    }
    // delect the leaf node
    return root;
}
int display(struct node *root)
{

    if (root != NULL)
    {
        display(root->left);
        printf("%d\t", root->data);
        display(root->right);
    }
}
int main()
{
    struct node *p = creation(10);
    struct node *p1 = creation(5);
    struct node *p2 = creation(15);
    struct node *p3 = creation(2);
    struct node *p4 = creation(6);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    display(p);
    delectt(p,10);
    printf("\n");
    display(p);
    
    return 0;
}
