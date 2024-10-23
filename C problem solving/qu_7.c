//Write a Program to Reverse an Array.
#include<stdio.h>

void reverseArray(int arr[] , int n)
{
    int start = 0 , end = n-1 , temp;
    while (start < end)
    {
        //swap the elements
        temp = arr [start];
        arr[start] = arr[end];
        arr[end] = temp;

        //move the pointer
        start++;
        end --;
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
     
    reverseArray(arr , n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}