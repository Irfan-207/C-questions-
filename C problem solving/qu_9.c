//Write a C program to remove duplicates from a sorted array.
#include<stdio.h>

int removeduplicate(int arr[] , int N)
{
    //If array is empty return statement
    if (N == 0)
    {
        printf("The Array is empty");
    }

    //initialize a pointer to store unique elements
    int i =0;
    //loop through the array
    for (int j = 0; j < N; j++)
    {
        //if current element is not equal to previous element
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
        
    }
    
    //return the value of unique element
    return i + 1;
}

int main()
{
    int n;
    printf("Enter the number of the elements you want to insert: ");
    scanf("%d" , &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) //Get the array from the user
    {
        scanf("%d", &arr[i]);
    }

    int N = sizeof(arr)/sizeof(arr[0]);

    int newlength = removeduplicate(arr , N); //remove the duplicate element from array and stor the remaining element in newlength

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newlength; i++) //print the new array
    {
        printf("%d " , arr[i]);
    }
    
    return 0;
}