//Write a Program to find the maximum and minimum of an Array.
#include<stdio.h>
#include<limits.h> 

void findMinMax(int arr[] , int n , int *max , int *min)
{
    *min = INT_MAX;
    *max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr [i] < *min)
        {
            *min = arr[i];
        }
        if (arr [i] > *max)
        {
            *max = arr[i];
        }
        
    }
    
}
int main()
{
    int n;
    printf("Enter the number of the elements you want to insert: ");
    scanf("%d" , &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min , max;
    
    findMinMax(arr, n, &min , &max);

    printf("The minimum element is %d\n", min);
    printf("The maximum element is %d\n", max);

    return 0;
}
