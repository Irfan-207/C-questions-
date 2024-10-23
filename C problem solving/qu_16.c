//Write a program to sort an array using Quick Sort
#include<stdio.h>
#include<stdlib.h>

/* If a should be placed before b, 
compare function should return positive value, 
if it should be placed after b, 
it should return negative value. Returns 0 otherwise */
int compare(const void *a, const void *b)
{
    return(*(int*)a - *(int*)b);
}
int main()
{
    int n;
    printf("Enter the number of the elements you want to stor: ");
    scanf("%d" ,&n);
    //Declare array and get the elements from the user
    int arr[n];
    for (int i = 0; i < n;++i)
    {
        scanf("%d" , &arr[i]);
    }
    //Print the entered array
    printf("Entered array: ");
    for (int j = 0; j < n;++j)
    {
        printf("%d " ,arr[j]);
    }

    qsort(arr , n,sizeof(int), compare);
    //Print the sorted array
    printf("\nSorted array: ");
    for (int k= 0; k < n; k ++)
    {
        printf("%d " , arr[k]);
    }
    

    
    return 0;
}