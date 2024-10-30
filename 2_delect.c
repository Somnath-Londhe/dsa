#include<stdio.h>
void display(int del[],int n){
    for (int  i = 0; i <n; i++)
    {
        printf("%d\t",del[i]);
    }
    printf("\n");
}
void input( int del[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("enter the value of array%d",i);
        scanf("%d",&del[i]);
    }
    
    

}
void delect(int del[],int size,int index){
    for (int i = index; i < size-1; i++)
    { 
        del[i]=del[i+1];
    }
}
int main()
{
    int del[100]; 

    int size=5,index=2;
     input(del,size);
    display(del,size);
    delect(del,size,index);
    size -=1;
    display(del,size);

    return 0;
}
