#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node*creation(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void preorder(struct node*root){
        if (root!=NULL)
        {
           printf("%d\t",root->data);
           preorder(root->left);
           preorder(root->right);
        }
        

}
int main()
{
    struct node *p = creation(2);
    struct node *p1 = creation(1);
    struct node *p2 = creation(4);
    struct node *p3 = creation(5);
    struct node *p4 = creation(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    preorder(p);

    return 0;
}
