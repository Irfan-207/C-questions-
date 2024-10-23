//Write a program to sort an array of strings.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Defining comparator function as per the requirement 
void mycompare(const void* a, const void* b)
{
    //Setting up rules for compare
    return strcmp(*(const char**)a , *(const char**)b);
}

//Function to sort the array
void sort(const char* arr[] ,int N)
{
    //Calling the qsort() function to sort the array with the help of comparator
    qsort(arr , N , sizeof(const char*), mycompare);
}

int main()
{
    int N;
    printf("How many text do you want to insert: ");
    scanf("%d" , &N);
    getchar(); // To consume the newline character left by scanf
    char* arr[N];

    for (int i = 0; i < N; i++)
    {
        // Allocate memory for each string
        arr[i] = malloc(100 * sizeof(char)); 
    }
    //Get the strings from the user 
    printf("Enter the text : ");
    for (int i = 0; i < N; i++) 
    {
        fgets(arr[i], 100, stdin);
        // Remove the newline character
        arr[i][strcspn(arr[i], "\n")] = '\0'; 
    }

    // Print the unsorted strings
    printf("\nUnsorted strings:\n");
    for (int i = 0; i < N; i++) {
        printf("%d: %s\n", i, arr[i]);
    }


   // Sort the given names
   sort(arr , N);

    //print the sorted string
    printf("/n Sorted string: ");
    for (int  k = 0; k < N; k ++)
    {
        printf("%d: %s \n", k, arr[k]);
    }
    
    
    return 0;
}