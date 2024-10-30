/*
1)The AVL terss is the non-Leaner data type in a data structure .
2)AVL trees the  balence in the two thees .
3)type of AVL Tress.
    i)RR Rotation.(Ringht-to-Ringht)
    ii)LL Rotation.(Left-to-Left)
    iii)RL Rotation.(Ringh-to-Left)
         10
        /  \
       5    15
           /  \
          11   20
     ((Ringh-to-Left)rotation in ...
         15
        /  \
       10   20
      /  \
     5    11
    VI)LR Rotation.(Left-to-Ringh)
         15
        /  \
       10   20
      /  \
     5    11
(Left-to-Ringh) rotation in ...
         10
        /  \
       5    15
           /  \
          11   20

1) insertion in  AVL Tress
Left-to-Left Rotation

         15
        /  \
       10   20
      /  \
     5    11

         15
        /  \
       10   15
      /     / \
    5      11  20

*/
#include <stdio.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
    int hight;
};
int hight(struct node *n)
{
    if (n == NULL)
        return 0;
    return n->hight;
}
struct node *creation(int data)
{
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    nn->data = data;
    nn->hight = 1;
    nn->left = NULL;
    nn->right = NULL;
    return nn;
}

int Balence(struct node *n)
{
    if (n == NULL)
    {
        /* code */
        return 0;
    }
    else
    {
        return hight(n->left) - hight(n->right);
    }
}
struct node *left_rotation(struct node *y)
{
    struct node *x = y->left;
    struct node *t2 = x->right;
    x->right = y;
    y->left = t2;
    y = max(hight(y->right), hight(y->left)) + 1;
    x = max(hight(x->right), hight(x->left)) + 1;
    return x;
}
struct node *right_rotation(struct node *x)
{
    struct node *y = x->left;
    struct node *t2 = y->right;
    y->left = x;
    x->left = t2;
    y = max(hight(y->right), hight(y->left)) + 1;
    x = max(hight(x->right), hight(x->left)) + 1;
    return y;
}
struct node *insertion(struct node *node, int data)
{
    if (node == NULL)
    
        return creation(data);
    
    if (data < node->data)
    
        node->left = insertion(node->left, data);
    
    else if (data > node->data)
    
        node->right = insertion(node->right, data);
        return node;

    
    node->hight=1+max(hight(node->right), hight(node->left));
    int bf= Balence(node);
    if (bf>-1&&data<node->left->data)
    {
        right_rotation(node);
    }
    
}
int main()
{

    return 0;
}
