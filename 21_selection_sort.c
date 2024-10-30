#include<stdio.h>
void print(int a[],int n){
    for (int  i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    
}
void selection(int a[],int n){
    int min,temp;
    for (int  i = 0; i < n-1; i++)
    {
        min=i;
        for (int  j = i+1 ; j < n; j++)
        {
            if (a[j]<a[min])
            {
                min=j;

            }
            
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        
    }
    
}
int main()
{
     int a[]={1,0,3,4,5,2,7,5};
     int n=8;
     print(a,n);
     selection(a,n);
     print(a,n);  
     return 0;
}
