#include <stdio.h>
void dicplay(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void insertion(int a[], int n)
{
    int key, j;
    for (int i = 1 ; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
int main()
{
    int a[] = {3, 4, 2, 2, 8, 6, 3, 2, 2, 3, 4};
    int n = 11;
    dicplay(a, n);
     insertion(a,n);
     printf("\n");
    dicplay(a, n);
    
    return 0;
}
