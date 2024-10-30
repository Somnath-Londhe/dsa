#include<stdio.h>
#include <stdlib.h>
struct myarray
{
     int total_size;
     int used_size;
     int* ptr;
};
 void createarray(struct myarray * a, int tsize,int usize){
     a->used_size =  usize;
     a->total_size = tsize;
     a-> ptr=(int*)malloc(tsize*sizeof(int));
}
void show(struct myarray * a){
     for (int  i = 0; i < a->used_size; i++)
     {
          /* code */
          printf("%d",(a->ptr)[i]);
     }
     
}
 
void setval(struct myarray * a){
     int n;
     for (int  i = 0; i < a->used_size; i++)
     {
          /* code */
          printf("enter  the element of array%d\n",i);
          scanf("%d",&n);
          (a->ptr)[i]=n;
     }
     
}
 
int main()
{
     struct myarray marck;
     createarray(&marck,10,2);
     printf("we are the running setval\n");
     setval(&marck);
     printf("we are the running setval\n");
     show(&marck);
     return 0;
}
