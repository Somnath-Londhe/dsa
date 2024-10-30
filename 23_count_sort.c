#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int min(int a[], int n)
{
    int max = INT_MIN;
    for (size_t i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
void count_sort(int a[], int n)
{
    int i, j;
    int max = min(a, n);
    int *count = (int)malloc((max + 1) * sizeof(int));
    for (i = 0; i < max+1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }
    i = 0;
    j = 0;
    while (i <= max)
    {
        if (count[i] > 0)
        {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int a[] = {1, 3, 4, 2, 4, 3, 5};
    int n = 7;
    print(a, n);
    count_sort(a, n);
    print(a, n);

    return 0;
}
