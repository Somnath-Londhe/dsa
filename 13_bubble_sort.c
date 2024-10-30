#include <stdio.h>
int print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");
}
void bubble_sort(int a[], int n)
{
    int temp;
    int pass=0;

    for (int  i = 0; i < n-1; i++)
    {
        for (int  j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
             temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
            
        }
    
    }
    
}


int main()
{
    int a[] = {1, 2, 45, 342, 53423};
    // int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    print(a, n);
    bubble_sort(a,n);
    print(a, n);

    return 0;
}
