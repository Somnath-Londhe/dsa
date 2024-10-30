#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
void Travasal(struct node *ptr)
{
   // printf("printf all value of\n");
    while (ptr != NULL)
    {
        printf("Element::%d\n", ptr->data);
        ptr = ptr->next;
    }printf("\n");
}
//case 1
struct node* inseraction(struct node*frist,int data){
  //  printf("inseraction of the func");
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=frist;
    ptr->data=data;
    return ptr;

}
//case 2
struct node* inseractionindex(struct node*frist,int data,int index){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=frist;
     int i=0;
     while (i!=index-1)
     {
        p=p->next; 
        i++;
     }
     ptr->data=data;
     ptr->next=p->next;
     p->next=ptr;
     return frist;
     

}
//case 3
struct node* inseractionatend(struct node*frist,int data){
   // printf("inseraction of the func");
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node* p=frist;
   while (p->next!=NULL)
   {
   p=p->next;
   }
   p->next=ptr; 
   ptr ->next=NULL;
   return frist;
   
}
//case 4
struct node* inseractionAtAfter(struct node*frist,struct node*prevnode,int data){
   // printf("inseraction of the func");
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
   ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return frist;
}
int main()
{
    struct node *frist;
    struct node *secound;
    struct node *thard;
    struct node *fourth;
    // mamery allcaction in linklint is heap
    frist = (struct node *)malloc(sizeof(struct node));
    secound = (struct node *)malloc(sizeof(struct node));
    thard = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    // travels in frist node to scound node
    frist->data = 1;
    frist->next = secound;
    // travels in secound node to thard node
    secound->data = 2;
    secound->next = thard;
    // travels in 3 node to 4 node
    thard->data = 3;
    thard->next = fourth;
    // travels in 4 node to null node
    fourth->data = 4;
    fourth->next = NULL;
    // call the func
    printf("linklist befour insertion\n");
     Travasal(frist);
   // inseractionindex(frist,33,4);
    // frist= inseraction(frist,55);
   //  frist=inseractionatend(frist,88);
     frist=inseractionAtAfter(frist,thard,77);
     printf("\nlinklist After insertion\n");
     Travasal(frist);


    return 0;
}
