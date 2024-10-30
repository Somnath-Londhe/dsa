#include <stdio.h>
// int linearsearch(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;    
//         }
//     }
//     return -1;
// }
int brnarysearch(int arr[],int size, int element ){

    int low,higt,mid;
    low=0;
    higt=size-1;
    
    while (low<=higt)
    {
    mid=(low+higt)/2;
    if (arr[mid]==element)
    {
        return 1;
    }
    if (arr[mid]<element)
    {
        low=mid+1;
    }else{
        higt=mid-1;
      }
    
    
    }
    return -1;    

}
int main()
{
    //this use for the linear search
    //this is the sorting & unsorting array use 
    // int arr[] = {1, 3, 45, 656, 56, 43, 76767, 7676, 76};
    // int size = 9;
    int arr[] = {1, 3, 45, 56, 556, 643};
    int size = 6;
    int element = 556;
    int searchindex = brnarysearch(arr, size, element);
    printf("show the element %d\n at found index%d", element, searchindex);

    return 0;
}
