// All about Pattern Printing
#include<stdio.h>
int rows; //Global variable
void menu()
{
    printf("1. Print Pyramid Pattern.\n");
    printf("2. Print Triangle\n");
    printf("3. Print Number Pattern\n");
    printf("4. Print Continuous Character Pattern\n");
    printf("5. Print Pascal Triangle\n");
    printf("6. Print Floyd’s Triangle Pyramid Pattern\n");
}
int main()
{
    menu();
    int choice;
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
        {
            printf("1.Half Pyramid Pattern of Numbers\n");
            printf("2.Inverted Half Pyramid of Numbers\n");
            printf("3.Full Pyramid Pattern of Numbers\n");
            printf("4.Hollow pyramid of ” * ” & Numbers\n");
            printf("5.Diamond Pyramid of ” * ” & Numbers\n");
            printf("6. Print Inverted Pyramid\n");

            int c1;
            printf("Enter your choice : ");
            scanf("%d", &c1);
            switch (c1)
            {
                case 1: 
                {
                    printf("Enter the number of rows : ");
                    scanf("%d",&rows);
                    // First loop to print rows
                    for (int i = 1; i <= rows; i++)
                    {
                        // Second loop to print same number in each rows
                        for (int j = 1; j <= i; j++)
                        {
                            printf("%d ",i);
                        }
                        printf("\n");
                    }
                    break;
                }
                case 2:
                {
                    printf("Enter the number of rows : ");
                    scanf("%d",&rows);
                    // First loop to print rows
                    for (int i = rows; i >=1 ; i--)
                    {
                        // Second loop to print same number in each rows
                        for (int k = 1; k <= i; k++)
                        {
                            printf("%d ", i);
                        }
                        printf("\n");
                    }
                    break;
                }
                case 3:
                {
                    printf("Enter the number of rows : ");
                    scanf("%d",&rows);
                    for (int i = 0; i <= rows; i++)
                    {
                        // inner loop 1 to print white spaces
                        for (int j = 1; j <= 2 * (rows - i); j++)
                        {
                            printf(" ");
                        }
                        // inner loop 2 to print numbers
                        for (int k = 1; k < 2 * i; k++) 
                        {
                            printf("%d ", i);
                        }
                        printf("\n");
                    }
                    break;
                }
                case 4:
                {
                    printf("Enter the number of rows : ");
                    scanf("%d",&rows);
                    for (int i = 1; i <= rows; i++)
                    {
                        // Print the leading spaces
                        for (int j = i; j < rows; j++)
                        {
                            printf(" ");
                        }
                        //  print *
                       for (int k = 1; k <= 2 * i - 1; k++) 
                       {
                            if (k == 1 || k == 2 * i - 1 || i == rows) 
                            {
                                printf("*");
                            } else 
                            {
                                printf(" ");
                            }
                        }       
                        // Move to the next line
                        printf("\n");
                    }  
                    break;
                }
                case 5:
                {
                    printf("Enter the number of rows : ");
                    scanf("%d",&rows);

                    // Print the top pyramid
                    for (int i = 1; i <= rows; i++)
                    {
                        for (int j = 1; j <= rows - i; j++) 
                        {
                            printf(" ");
                        }
                        for (int k = 1; k <= 2 * i - 1; k++)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                
                    // Print the inverted pyramid
                    for (int i = rows - 1; i >= 1; i--) 
                    {
                        for (int j = 1; j <= rows - i; j++) 
                        {
                            printf(" ");
                        }
                        for (int k = 1; k <= 2 * i - 1; k++) 
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                    break;
                }
                case 6:
                {
                    printf("Enter the number of rows : ");
                    scanf("%d",&rows);
                    for (int i = 1; i <= rows; i++)
                    {
                        // Loop to print the blank space
                        for (int j = 1; j <= i; j++)
                        {
                            printf(" ");
                        }
                        // loop th print *
                        for (int k = 1; k < rows * 2 - (i * 2 -1); k++)
                        {
                            printf("*");
                        }
                        // Move to next line
                        printf("\n");
                    }
                    break;
                }
                default:
                {
                    printf("Invalid choice: ");
                    break;
                }
            }
        }
        case 2:
        {
            printf("Enter a value: ");
            scanf("%d",&rows);
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }
        case 3:
        {
            printf("Enter the number of rows : ");
            scanf("%d",&rows);
            int num =1, gap;
            gap = rows - 1;

            for (int i = 1; i <= rows; i++)
            {
                num = i;
                for (int j =1; j <= gap; j++)
                {
                    printf(" ");
                }
                gap -- ;
                for (int  k = 1; k <= i; k++)
                {
                    printf("%d", num);
                    num ++ ;
                }
                num --;
                num --;
                for (int l = 1; l < i; l++) 
                {
                    printf("%d", num);
                    num--;
                }
                printf("\n");
            }
            break;
        }
        case 4:
        {
            printf("Enter the number of rows: ");
            scanf("%d", &rows);
            char character = 'A';
            // first for loop is used to identify number rows
            for (int i = 0; i < rows; i++)
            {
                // second for loop is used to identify number of columns based on the rows
                for (int j = 0; j <= i; j++)
                {
                    printf("%c ", character);
                }
                printf("\n");
                // incrementing character value so that it will print the next character
                character ++ ;
            }
            break;
        }
        case 5:
        {
            printf("Enter the number of rows: ");
            scanf("%d", &rows);

            // Pascal’s Triangle is a triangular array of binomial coefficients in which the nth row contains binomial coefficients nC0, nC1, nC2, ……. nCn.
            for (int line = 1; line <= rows; line++)
            {
                for (int space = 1; space <= rows - line; space++)
                {
                    printf("  ");
                }
                int coef = 1;
                for (int i = 1; i <= line; i++)
                {
                    // The first value in a line is always 1
                    printf("%4d", coef);
                    coef = coef * (line - i) / i;
                }
                printf("\n");
            }
            break;
        }
        case 6:
        {
            int i = 1 , j = 1;
            printf("Enter the number of rows: ");
            scanf("%d", &rows);
            // condition for number of element
            while (i <= (rows * (rows + 1)) / 2)
            {
                printf("%d ", i);
                // condition for what element has to print and how many times
                if (i == (j * (j + 1)) / 2)
                {
                    printf("\n");
                    j++;
                }
                i++;
            }
            break;
        }
        default:
        {
            printf("Invalid choice !!!");
            break;
        }
    }
    return 0;
}