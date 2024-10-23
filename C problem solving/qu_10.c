// All about array
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void menu()
{
    printf("\n\t\t\t\t\t1. Find Largest Element in an Array.\n");
    printf("\n\t\t\t\t\t2. Calculate the Average of All Elements of an Array.\n");
    printf("\n\t\t\t\t\t3. Sort the Elements of an Array in Descending Order.\n");
    printf("\n\t\t\t\t\t4. Sort an Array in Ascending Order.\n");
    printf("\n\t\t\t\t\t5. Remove Duplicates From Sorted Array.\n");
    printf("\n\t\t\t\t\t6. Merge Two Arrays.\n");
    printf("\n\t\t\t\t\t7. Find Common Array Elements Between Two Arrays.\n");
    printf("\n\t\t\t\t\t8. Rotate array by n positions is.\n");
    printf("\n\t\t\t\t\t9. Transpose a square matrix.\n");
    printf("\n\t\t\t\t\t10. Add two matrix . \n");
    printf("\n\t\t\t\t\t11. Multiply two matrix . \n");
    printf("\n\t\t\t\t\t12. Print a bordered matrix. \n");
    printf("\n\t\t\t\t\t13. Rotate array elements .\n");
    printf("\n\t\t\t\t\t14. Compute the Sum of Diagonals of a Matrix .\n");
    printf("\n\t\t\t\t\t15. Interchange Elements of First and Last in a Matrix Across Rows .\n");
    printf("\n\t\t\t\t\t16. Interchange Elements of First and Last in a Matrix Across Column .\n");
}
// Function prototyping
void Largest_Element(); //Function for largest element
void Average(); //Function for average
void sort(); //Function for sorting array in a decreeing order
void Ascending_Order(); //Function for sorting array in an ascending order
// Function to remove duplicates from an array
int removeDuplicates(int arr[] ,int n)
{
    if (n == 0){
        return 0;
    }
    
    int i = 0; // Pointer to track the position of the last unique element
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1; //New length of the array
}
void remove_duplicate();
// Function to merge two arrays
int *merge_array(int arr1[], int n1 , int arr2[], int n2)
{
    // Resultant array to store merged array
    int *res = (int*)malloc(n1 * n2 * sizeof(int));

    // copy element of the first array
    memcpy(res , arr1 , n1 * sizeof(int)); 

    // copy element of the second array
    memcpy(res + n1, arr2 , n2 * sizeof(int)); 

    return res ;
}
void Merge();
// Function to find element in an array
int find_element();
// Functions to rotate an array by n positions
void leftRotateByOne(int arr[] , int n);
void leftRotate(int arr[] , int n , int d);
void printArray(int arr[] , int n);
void rotate_array();
// Function to transpose a matrix
void transpose(int row , int column , int arr1[][column], int arr2[][row])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }   
}
void transpose_matrix();
// Function to add two matrix
void add();
// Functions to multiply two matrix
void multiply(int row1 , int column1 , int arr1[][column1] , int row2 , int column2 , int arr2[][column2])
{
    int result[row1][column2];
    printf("Resultant matrix : \n");

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < row2; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
            printf("%d " , result[i][j]);
        }
        printf("\n");
    }
}
void multiply_matrix();
// Function to print a bordered matrix
void bordered_matrix();
// Function to rotate array element
void rotate_matrix(int m, int n, int mat[m][n]) 
{ 
    int row = 0, col = 0; 
    int prev, curr; 
    /* 
    row: Starting row index 
    m: ending row index 
    col: starting column index 
    n: ending column index 
    i: iterator 
    */
  
    while (row < m && col < n) { 
  
        if (row + 1 == m || col + 1 == n) 
            break; 
  
        // Store the first element of next row and this 
        // element will replace the first element of current 
        // row 
        prev = mat[row + 1][col]; 
  
        // Move elements of first row from remaining rows 
        for (int i = col; i < n; i++) { 
            curr = mat[row][i]; 
            mat[row][i] = prev; 
            prev = curr; 
        } 
        row++; 
  
        // Move the elements of last column from the 
        // remaining columns 
        for (int i = row; i < m; i++) { 
            curr = mat[i][n - 1]; 
            mat[i][n - 1] = prev; 
            prev = curr; 
        } 
        n--; 
  
        // Move the elements of last row from the remaining 
        // rows 
        if (row < m) { 
            for (int i = n - 1; i >= col; i--) { 
                curr = mat[m - 1][i]; 
                mat[m - 1][i] = prev; 
                prev = curr; 
            } 
        } 
        m--; 
  
        // Move the elements of first column from the 
        // remaining rows 
        if (col < n) { 
            for (int i = m - 1; i >= row; i--) { 
                curr = mat[i][col]; 
                mat[i][col] = prev; 
                prev = curr; 
            } 
        } 
        col++; 
    } 
} 
void Rotate_matrix();
// Function to Compute the Sum of Diagonals of a Matrix
void Diagonals();
// Function to Interchange Elements of First and Last in a Matrix Across Rows
void interchangeFirstLast(int column1 , int arr1[][column1])
{
    int rows = column1;
    for (int i = 0; i < column1; i++)
    {
        int t = arr1[0][i];
        arr1[0][i] = arr1[rows - 1][i];
        arr1[rows - 1][i] = t;
    }
}
void interChange();
// Function to Interchange Elements of First and Last in a Matrix Across Column
void interchangeFirstLast_column(int column1 , int arr1[][column1])
{
    for (int i = 0; i < column1; i++)
    {
        int t = arr1[i][0];
        arr1[i][0] = arr1[i][column1 - 1];
        arr1[i][column1 - 1] = t;
    }
}
void interChange_column();
int main()
{
    menu();
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1 : {
            Largest_Element();
            break;
        }
        case 2: {
            Average();
            break;
        }
        case 3: {
            sort();
            break;
        }
        case 4: {
            Ascending_Order();
            break;
        }
        case 5: {
            remove_duplicate();
            break;
        }
        case 6: {
            Merge();
            break;
        }
        case 7: {
            find_element();
            break;
        }
        case 8: {
            rotate_array();
            break;
        }
        case 9: {
            transpose_matrix();
            break;
        }
        case 10: {
            add();
            break;
        }
        case 11: {
            multiply_matrix();
            break;
        }
        case 12: {
            bordered_matrix();
            break;
        }
        case 13: {
            Rotate_matrix();
            break;
        }
        case 14: {
            Diagonals();
            break;
        }
        case 15: {
            interChange();
            break;
        }
        case 16: {
            interChange_column();
            break;
        }
        default: {
            printf("Invalid choice !!!");
            break;
        }
    }
    return 0;
}
// Fuction to Find Largest Element in an Array
void Largest_Element()
{
    int N;
    printf("How many element you want to enter : ");
    scanf("%d", &N);    
    int arr[N];
    // get the array element
    printf("Enter the elements : ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Print the array
    printf("Entered array :\n ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    int max = arr[0]; // assign the first value of the array as largest element
    for (int j = 1; j < N; j++)
    {
        if (max < arr[j])
        {
            max = arr[j];
        }
    }
    printf("\nLargest Element in the Array is : %d", max);
}
// Function to Calculate the Average of All Elements of an Array.
void Average()
{
    int N;
    printf("How many element you want to enter : ");
    scanf("%d", &N);    
    int arr[N];
    // get the array element
    printf("Enter the elements : ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Print the array
    printf("Entered array :\n ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    // Storing the sum of all the element
    int sum =0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    double ave = sum / N;
    printf("\nThe sum : %d\n", sum);
    printf("The average : %.2lf", ave);
}
// Fuction to Sort the Elements of an Array in Descending Order
void sort()
{
    int N;
    printf("How many element you want to enter : ");
    scanf("%d", &N);    
    int arr[N];
    // get the array element
    printf("Enter the elements : ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Print the array
    printf("Entered array :\n ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    // sort the array
    for (int k = 0; k < N; k++)
    {
        // iterates the array elements from index 1 
        for (int l = k+1; l < N; l++)
        {
            // comparing the array elements, to set array elements in descending order 
            if (arr[k] < arr[l])
            {
                int t = arr[k];
                arr[k] = arr[l];
                arr[l] = t;
            }
        }
    }
    // Printing the output
    printf("\nSorted array : ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
}
// function to Sort an Array in Ascending Order
void Ascending_Order()
{
    int N;
    printf("How many element you want to enter : ");
    scanf("%d", &N);    
    int arr[N];
    // get the array element
    printf("Enter the elements : ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Print the array
    printf("Entered array :\n ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    // sort the array
    for (int k = 0; k < N; k++)
    {
        // iterates the array elements from index 1 
        for (int l = k+1; l < N; l++)
        {
            // comparing the array elements, to set array elements in descending order 
            if (arr[k] > arr[l])
            {
                int t = arr[k];
                arr[k] = arr[l];
                arr[l] = t;
            }
        }
    }
    // Printing the output
    printf("\nSorted array : ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
}
// Function to Remove Duplicates From Sorted Array
void remove_duplicate()
{
    int N;
    printf("How many element you want to enter : ");
    scanf("%d", &N);    
    int arr[N];
    // get the array element
    printf("Enter the elements : ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Print the array
    printf("Entered array :\n ");
    for (int j = 0; j < N; j++)
    {
        printf("%d ", arr[j]);
    }

    int nemLength = removeDuplicates(arr , N);

    printf("\nAfter removing duplicates: ");
    for (int k = 0; k < nemLength; k++)
    {
        printf("%d ", arr[k]);
    }
}
// Function to Merge Two Arrays
void Merge()
{
    int n1;
    printf("How many element you want to enter into the first array: ");
    scanf("%d", &n1);    
    int arr1[n1];
    // get the array element
    printf("Enter the elements : ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    // Print the array
    printf("First array :\n ");
    for (int j = 0; j < n1; j++)
    {
        printf("%d ", arr1[j]);
    }
    int n2;
    printf("\nHow many element you want to enter into the second array : ");
    scanf("%d", &n2);    
    int arr2[n2];
    // get the array element
    printf("Enter the elements : ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    // Print the array
    printf("First array :\n ");
    for (int j = 0; j < n2; j++)
    {
        printf("%d ", arr2[j]);
    }

    printf("\nAfter merging the arrays : ");
    int *res = merge_array(arr1 , n1 , arr2 , n2);
    for (int l = 0; l < n1 + n2; l++)
    {
        printf("%d ", res[l]);
    } 
}
// Function to Find Common Array Elements Between Two Arrays
int find_element()
{
    // Get and print the first array
    int n1;
    printf("How many elements you want to enter into the first array : ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements : ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("First array : ");
    for (int j = 0; j < n1; j++)
    {
        printf("%d ", arr1[j]);
    }

    // Get and print the second array
    int n2;
    printf("\nHow many elements you want to enter into the second array : ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements : ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("Second array : ");
    for (int j = 0; j < n2; j++)
    {
        printf("%d ", arr2[j]);
    }

    // Print the common elements
    printf("\nCommon elements : ");
    int flag , k =0; 
    // k =  Index for the result array. 
    //flag =  Used to check if an element is already in the result array.
    int result[100]; //Array to store common elements.

    // Outer loop iterates through arr1.
    for (int i = 0; i < n1; i++)
    {
        // Inner loop iterates through arr2.
        for (int j = 0; j < n2; j++)
        {
            // To match elements of array1 with elements of array2.
            if (arr1[i] == arr2[j])
            {
                flag = 0; //If an element in arr1 matches an element in arr2, flag is set to 0.

                // To traverse in result array.
                for (int x = 0; x < k; x++)
                {
                    // Check whether found element is already present in result array or not.
                    if (result[x] == arr1[i])
                    {
                        flag++;
                    }
                }
                // If we found a new element which is common in both arrays then store it in result array and print it.
                if (flag == 0)
                {
                    result[k] = arr1[i];
                    printf("%d " , result[k]);
                    k++;
                }
            }
        }
    }
}
// Functions for rotate an array by n positions
// Function to rotate array left by one position
void leftRotateByOne(int arr[] , int n)
{
    int temp = arr[0];
    for (int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp ;
}
// Function to rotate array left by d positions
void leftRotate(int arr[] , int n , int d)
{
    for (int i = 0; i < d; i++)
    {
        leftRotateByOne(arr , n);
    }
}
// Function to print the array
void printArray(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d " , arr[i]);
    }
    printf("\n");
}
void rotate_array()
{
    // Get and print the first array
    int n1;
    printf("How many elements you want to enter : ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements : ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Entered array : ");
    for (int j = 0; j < n1; j++)
    {
        printf("%d ", arr1[j]);
    }
    int d;
    printf("\nEnter the value of rotation : ");
    scanf("%d" , &d);
    // Rotate array left by d positions
    leftRotate(arr1 , n1 , d);
    printf("Array  after rotated by %d positions is: ", d);
    printArray(arr1 , n1);
}
// Function to transpose a matrix
void transpose_matrix()
{
    int row , column;
    printf("Enter the row numbers : ");
    scanf("%d" , &row);
    printf("Enter the column numbers : ");
    scanf("%d" , &column);

    int array[row][column];
    printf("Enter the elements : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    // print the array
    printf("\nThe array : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    int arr1[column][row];
    transpose(row , column , array , arr1);
    printf("\n\n\nTranspose matrix : \n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }
}
// Function to add two matrix
void add()
{
    int row1 , column1;
    printf("Enter the row number : ");
    scanf("%d" , &row1);
    printf("Enter the column number : ");
    scanf("%d" , &column1);
    int arr1[row1][column1];
    printf("Enter the elements: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    int row2 , column2;
    printf("Enter the row number : ");
    scanf("%d" , &row2);
    printf("Enter the column number : ");
    scanf("%d" , &column2);
    int arr2[row2][column2];
    printf("Enter the elements: ");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("First matrix: \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond matrix: \n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%d " , arr2[i][j]);
        }
        printf("\n");
    }

    // Adding two matrix
    int result[row1][column1];
    if (row1 != row1 || column1 != column2)
    {
        printf("The calculation is not possible!!!");
    }
    else{
        for (int k = 0; k < row1; k++)
        {
            for (int l = 0; l < column1; l++)
            {
                result[k][l] = arr1[k][l] + arr2[k][l];
            }
        }
    }
    printf("\nThe resultant matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d " , result[i][j]);
        }
        printf("\n");
    }

}
// Function to multiply two matrix
void multiply_matrix()
{
    // Get the first array from the user
    int row1 , column1;
    printf("Enter the row number : ");
    scanf("%d" , &row1);
    printf("Enter the column number : ");
    scanf("%d" , &column1);
    int arr1[row1][column1];
    printf("Enter the elements: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    // Get the first array from the user
    int row2 , column2;
    printf("Enter the row number : ");
    scanf("%d" , &row2);
    printf("Enter the column number : ");
    scanf("%d" , &column2);
    int arr2[row2][column2];
    printf("Enter the elements: ");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Print the arrays for user satisfaction
    printf("First matrix: \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond matrix: \n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%d " , arr2[i][j]);
        }
        printf("\n");
    }

    if (column1 != row2)
    {
        printf("The number of columns in Matrix-1 must be equal to the number of rows in Matrix-2\n");
    }
    else{
        multiply(row1 , column1 , arr1 , row2 , column2 , arr2);
    }
}
// Function to print a bordered matrix
void bordered_matrix()
{
     // Get the array from the user
    int row1 , column1;
    printf("Enter the row number : ");
    scanf("%d" , &row1);
    printf("Enter the column number : ");
    scanf("%d" , &column1);
    int arr1[row1][column1];
    printf("Enter the elements: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    // Print the array
    printf("Entered matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }

    printf("Bordered matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            if (i == 0 || j == 0 || i == row1 - 1 || j == column1 - 1)
            {
                printf("%d " , arr1[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
// Function tyo rotate array elements
void Rotate_matrix()
{
    // Get the array from the user
    int row1 , column1;
    printf("Enter the row number : ");
    scanf("%d" , &row1);
    printf("Enter the column number : ");
    scanf("%d" , &column1);
    int arr1[row1][column1];
    printf("Enter the elements: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    // Print the array
    printf("Entered matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }

    // This function is rotate the elements of matrix. 
    rotate_matrix(row1 , column1 , arr1);
    printf("\nRotated matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }
}
// Function to Compute the Sum of Diagonals of a Matrix
void Diagonals()
{
        // Get the array from the user
    int row1 , column1;
    printf("Enter the row number : ");
    scanf("%d" , &row1);
    printf("Enter the column number : ");
    scanf("%d" , &column1);
    int arr1[row1][column1];
    printf("Enter the elements: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    // Print the array
    printf("Entered matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }

    int sum = 0 , a=0;
    if (row1 != column1)
    {
        printf("The operation is not possible!!!");
    }
    else{
        for (int i = 0; i < row1; i++)
        {
            // Calculating the main Diagonals sum
            sum += arr1[i][i];
            // calculating the off Diagonals sum
            a += arr1[i][row1 - i -1];
        }
        printf("\nThe main diagonals sum : %d." , sum);
        printf("\nThe off diagonals sum : %d." , a);
    }
}
// Function to Interchange Elements of First and Last in a Matrix Across Rows
void interChange()
{
    // Get the array from the user
    int row1 , column1;
    printf("Enter the row number : ");
    scanf("%d" , &row1);
    printf("Enter the column number : ");
    scanf("%d" , &column1);
    int arr1[row1][column1];
    printf("Enter the elements: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    // Print the array
    printf("Entered matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }
    interchangeFirstLast(column1 , arr1);
    printf("\nOutput matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }
}
// Function to Interchange Elements of First and Last in a Matrix Across column
void interChange_column()
{
    // Get the array from the user
    int row1 , column1;
    printf("Enter the row number : ");
    scanf("%d" , &row1);
    printf("Enter the column number : ");
    scanf("%d" , &column1);
    int arr1[row1][column1];
    printf("Enter the elements: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    // Print the array
    printf("Entered matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }
    interchangeFirstLast_column(column1 , arr1);
    printf("\nOutput matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }
}