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
void insrton(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("%d key is alredy exist", key);
            return;
        }
        else if (key<root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node* new=cretion(key);
    if (key<prev->data)
    {
        prev->left=new;
    }else{
        prev->right=new;

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
    p->right = p2;32
    p1->left = p3;
    p1->right = p4;
    insrton(p,17);
    printf("%d",p2->right->data);
    return 0;
}
