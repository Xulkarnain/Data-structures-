#include <stdio.h>

//Finding the missing element in a sorted array

int missingelement(int arr,int arr_size)
{
    int diff = arr[0];
    for(int i=0; i<arr_size; i++)
    {
        if(arr[i]-i != diff)
        {
            return i+diff;
        }
    }
    return -1;
}

int mssngelement2(int arr[],int arr_size)
{
    int sum = 0;

    for(int i=0; i<arr_size; i++)
    {
        sum += arr[i];
    }

    int n = arr[arr_size-1];

    int total = n*(n+1)/2;

    return total - sum;
}

int main()
{
    int arr[] = {6,7,8,9,11,12,13,14,15,16,17,18,19};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int missing = missingelement(arr,arr_size);
    printf("The missing element is %d", missing);
    return 0;
}