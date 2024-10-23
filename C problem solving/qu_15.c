//C Program to implement Insertion Sort
#include<stdio.h>
#include<math.h>

void insertionsort(int arr[], int N)
{
    //starting from the second element
    for (int i = 1; i < N; i++)
    {
        int key = arr[i];
        int j = i-1;
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position to
        the right of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        //Move the ley to it's correct position
        arr[j+1] = key;
    }
}
int main()
{
    int N;
    printf("Enter the number of the elements you want to stor: ");
    scanf("%d" ,&N);
    //Declare array and get the elements from the user
    int arr[N];
    printf("\nEnter the elements: ");
    for (int i = 0; i < N;++i)
    {
        scanf("%d" , &arr[i]);
    }
    //Print the unsorted array
    printf("unsorted array: ");
    for (int j = 0; j < N;++j)
    {
        printf("%d " ,arr[j]);
    }

    // Calling insertion sort on array arr
    insertionsort(arr, N);
    //Print the sorted array
    printf("\nSorted array: ");
    for (int k= 0; k < N; k ++)
    {
        printf("%d " , arr[k]);
    }
    return 0;
}