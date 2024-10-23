//Write a C Program to Find the Transpose of a Square Matrix
#include<stdio.h>

//DECLARE A FUNCTION TO TRANSPOSE THE MATRIX
void transpose(int a, int b, int array[][b] , int B[][a])
{
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            B[j][i] = array[i][j];
        }
    }
}

int main()
{
    //DECLARE VARIABLE TO STORE THE ROW AND THE COLUMN NUMBER OF THE ARRAY
    int a , b;
    printf("Enter the row elements number: ");
    scanf("%d" , &a);
    printf("Enter the column elements number: ");
    scanf("%d" , &b);
    int array[a][b];

    //GET THE ARRAY ELEMENTS FROM THE USER
    printf("Enter the elements : \n");
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
           scanf("%d" , &array[i][j]);
        }    
        printf("\n");
    }

    //DECLARE AN ARRAY TO STORE THE TRANSPOSE MATRIX
    int B[b][a] , x, y;

    transpose(a, b, array,B); //PASS ARGUMENTS TO THE FUNCTION 

    printf("Transpose Array: \n");
    //LOOP THROUGH THE ARRAY
    for (int k = 0; k < b; ++k)
    {
        for (int l = 0; l < a; ++l)
        {
            printf("%d \n", B[k][l]); //EXCHANGE THE ROW AND COLUMN VALUE 
        }
        printf("\n");
    }
    return 0;
}