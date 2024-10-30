#include<stdio.h>
void display(int arr[],int n){
for (int  i = 0; i < n; i++)
{
    printf("%d ",arr[i]);
}
printf("\n");
}
void input( int arr[],int n ){
    printf("enter the arr elenemt\n");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
int inseration( int arr[], int size, int element, int cap, int index){
    if (size>=cap)
    {
        return -1;
    }
    for (int  i = size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element; 
    return 1; 
} 
int main()
{  
   int  arr[100];
    int size=5;
    input(arr,size);
    display(arr,size);
    int element=70;
    int index=3;
    inseration(arr,size,element,100,index); 
    size++;
    display(arr,size);


     return 0;
}
