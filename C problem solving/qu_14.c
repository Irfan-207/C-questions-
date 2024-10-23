//Write a program to Print some patterns.
#include<stdio.h>

void choice()
{
    printf("1. Half Pyramid Pattern of Numbers.\n");
    printf("2. Inverted Half Pyramid of Numbers.\n");
    printf("3. Full Pyramid Pattern of Numbers.\n");
    printf("4. Full Pyramid of Numbers  in 180 Degree.\n");
}
void haif_pyramid();
void inverted_half_pyramid();
void full_pyramid();
void full_pyramid_turned();
/* void hollow_pyramid();
void dimond_pyyramid(); */
int main()
{
    choice();
    printf("Enter your choice: ");
    int ch;
    scanf("%d" , &ch);
    switch (ch)
    {
        case 1:
        {
            printf("Print a Half Pyramid Pattern of Numbers.\n");
            haif_pyramid();
            break;
        }
        case 2:
        {
            printf("Print an Inverted Half Pyramid of Numbers.\n");
            inverted_half_pyramid();
            break;
        }
        case 3:
        {
            printf("Print a Full Pyramid Pattern of Numbers.\n");
            full_pyramid();
            break;
        }
        case 4:
        {
            printf("Print a Full Pyramid of Numbers  in 180 Degree.\n");
            full_pyramid_turned();
            break;
        }
    }
    return 0;
}

//FUNCTION FOR HALF PYRAMID
void haif_pyramid()
{
    int rows;
    printf("Enter row number:");
    scanf("%d", &rows);

    //firt loop to print rows
    for (int i = 1; i <= rows; i++)
    {
        // second loop for printing similar number in each rows
        for (int j = 1; j <= i; j++)
        {
            printf("%d " , i);
        }
         printf("\n");
    }
}

//FUNCTION FOR INVERTED HALF PYRAMID
void inverted_half_pyramid()
{
    int rows;
    printf("Enter row number:");
    scanf("%d", &rows);
    
    //firt loop to print rows
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d " , i);
        }
         printf("\n");
    }
    
}
//FUNCTION FOR FULL PYRAMID
void full_pyramid()
{
    int rows;
    printf("Enter row number:");
    scanf("%d", &rows);

    //first loop for all rows
    for (int i = 1; i <= rows; i++)
    {
        // inner loop 1 to print white spaces
        for (int j = 1; j <= 2*(rows - i); j++)
        {
            printf(" ");
        }
        // inner loop 2 to print numbers
        for (int k = 1; k < 2 * i; k++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
}
//FUNCTION FOR FULL PYRAMID 180 DEGREE
void full_pyramid_turned()
{
    int n;
    printf("Enter the number you want to print up to: ");
    scanf("%d",&n);

    //printing upper part
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d " , i);
        }
        printf("\n");
    }

    //printing lower part
    for (int i = n-1; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
