#include <stdio.h>
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int  QQuick(int a[],int low ,int high){
int provit =a[low];
int temp;
int i=low+1;
int j=high;
do
{

while (a[i]<=provit)
{
    i++;
}
while (a[j]>provit)
{
    j++;
}
if (i<j)
{
  temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
} while (i<j);

    temp=a[low];
    a[low]=a[j];
    a[j]=temp;

    return j;
}
void Quick(int a[], int low, int high)
{
    int index;
    if (low < high)
    {
        

        index = QQuick(a, low, high);
        Quick(a, low, index - 1);
        Quick(a, index + 1, high);
    }
}
int main()
{
    int a[] = {1, 0, 3, 4, 5, 2, 7, 5};
    int n = 8;
    print(a, n);
    Quick(a, 0,n-1);
    print(a, n);
    return 0;
}
