#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*f=NULL,*r=NULL;
void cretion(int data){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    if (f==NULL)
    {
        f=temp;
        r=temp;
    }else
    {
        r->next=temp;
        r=temp;
    }
    
    
}
void dequru(){
    struct node*temp=f;
    f=f->next;
    free(temp);
}
void display(){
    struct node*ptr=f;
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}


int main()
{
     cretion(1);
     cretion(2);
     cretion(3);
     cretion(4);
     cretion(5);
     display();
   printf(" remove the element:-dequru()");
     dequru();
     dequru();
     dequru();
     display();

     return 0;
}
