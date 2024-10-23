// Write a code to multiply two matrix
#include<stdio.h>
#define MAX 10
int main()
{
    // Declare the first matrix
    int row1, column1;

    printf("Enter the row number: ");
    scanf("%d", &row1);
    printf("Enter the column number: ");
    scanf("%d", &column1);

    int fMatrix[row1][column1];
    // Get the matrix from the user
    printf("Enter the elements: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d" , &fMatrix[i][j]);
        }
    }
    // Printing the matrix for user satisfaction
    printf("Entered matrix : \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d " , fMatrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Declare the second matrix
    int row2, column2;

    printf("Enter the row number: ");
    scanf("%d", &row2);
    printf("Enter the column number: ");
    scanf("%d", &column2);

    int sMatrix[row2][column2];
    // Get the matrix from the user
    printf("Enter the elements: ");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            scanf("%d" , &sMatrix[i][j]);
        }
    }
    // Printing the matrix for user satisfaction
    printf("Entered matrix : \n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%d " , sMatrix[i][j]);
        }
        printf("\n");
    }

    // Multiply two matrix
    int result[MAX][MAX];
    if (column1 != row2)
    {
        printf("Error! column of first matrix not equal to row of second.\n");
    }
    else
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < column1; k++)
                {
                    result[i][j] += fMatrix[i][k] * sMatrix[k][j];
                }
            }
        }
    }

    // Printing the result matrix
    printf("Resultant matrix:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}