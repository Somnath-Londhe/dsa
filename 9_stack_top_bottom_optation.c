#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;

};

int full(struct stack*ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1;
        
    }else
    {
        return 0;
    }
    
}
int empty(struct stack*ptr){
    if (ptr->top  == -1)
    {
        return 1;
    }else
    {
      return 0;
    }
    
    

}
void push( struct stack*ptr,int value){
    if (full(ptr))
    {
         printf("stack overflow%d\n",value);
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=value;    
    }
}
int pop( struct stack*ptr){
    if (empty(ptr))
    {
         printf("stack underflow%d\n");
         return-1;
    }else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;    
    }
    
    

}
int peek(struct stack*ptr,int i){
    if (ptr->top-i+1<0)
    {
        /* code */
        printf("this is the not valide possi");
        return 0;
    }else
    {
        return ptr->arr[ptr->top-i+1];
    }
    
    

}
int topelement(struct stack*ptr){
        return ptr->arr[ptr->top];
}
int bottomelement(struct stack*ptr){
        return ptr->arr[0];
}
int main()
{
     struct stack*sp=( struct stack*)malloc(sizeof(struct stack));
     sp-> size=90;
     sp-> top=-1;
     sp-> arr=(int *)malloc(sp->size*sizeof (int ));
     printf("before %d\n",full(sp));
     printf("before %d\n",empty(sp));
    push(sp,1);
    push(sp,2);
    push(sp,3);
    push(sp,4);
    push(sp,56);
    push(sp,6);
    //  printf("full: %d\n",  full(sp));
    //  printf("empty: %d\n",empty(sp));
    //  printf("poppednis the seack:=%d\n",pop(sp));
    //  printf("poppednis the seack:=%d\n",pop(sp));
    //  printf("poppednis the seack:=%d\n",pop(sp));
    //  printf("poppednis the seack:=%d\n",pop(sp));  
    //  printf("poppednis the seack:=%d\n",pop(sp));
    // for (int  j = 1; j <= sp->top+1; j++)
    // {
    //     printf("this is the position=%d And this element%d\n",j,peek(sp,j));
    // }
    printf("THE TOP most element is the array=%d\n",topelement(sp));    
    printf("THE BOTTOM most element is the array=%d",bottomelement(sp));    

     return 0;
}
