//All about Armstrong Number
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

void menu()
{
    printf("1. Check for Armstrong Number\n");
    printf("2. Check For Armstrong Number Using Recursion\n");
    printf("3. Check For Armstrong Number Using a Numeric Strings\n");
    printf("4. Print the Armstrong Number between a limit.\n");
}

// Choice 1
bool armsNum(int a);
// Choice 2
int armstrongSum(int N, int K);
bool isArmstrong(int N);
// Choice 3
int isArms(int N); 
//Choice 4
int armsLimit(int x , int y);
int main()
{
    
    menu();
    int choice;
    printf("Enter your choice: ");
    scanf("%d" , &choice);
    switch (choice)
    {
        case 1:
        {
            int num;
            printf("Enter the number : ");
            scanf("%d" , &num);
            if (armsNum(num))
            {
                printf("%d is an armstrong number !!!\n", num);
            }
            else
            {
                printf("%d is not an armstrong number !!!\n", num);
            }
            break;
        }
        case 2:
        {
            int num;
            printf("Enter the number : ");
            scanf("%d" , &num);
            if (isArmstrong(num))
            {
                printf("%d is an armstrong number !!!\n" , num);
            }
            else{
                printf("%d is not an armstrong number !!!\n" , num);
            }
            break;
        }
        case 3:
        {
            int num;
            printf("Enter the number : ");
            scanf("%d" , &num);
            if (isArms(num))
            {
                printf("%d is an armstrong number !!!\n" , num);
            }
            else{
                printf("%d is not an armstrong number !!!\n" , num);
            }
            break;
        }
        case 4:
        {
            int start , end;
            printf("Enter the starting point: ");
            scanf("%d" , &start);
            printf("Enter the finishing point : ");
            scanf("%d" , &end);
           int num , sum , count =0;
           printf("The armstrong numbers are : ");
            // This loop will run for starting value to ending value
            for (int i = start; i <= end; i++)
            {
                num = i;
                // Count number of digits.
                while (num != 0)
                {
                    num /= 10;
                    count++;
                }
                num = i;
                sum = pow(num % 10 , count) + pow((num % 100 - num % 10)/10, count) + pow((num % 1000 - num % 100)/100 , count);

                //check for armstrong number
                if (sum == i)
                {
                    printf("%d ", i);
                }
                count = 0;
            }
            break;
        }

        case 5: 
        {
            
        }
    }
    return 0;
}
// proccess 1
bool armsNum(int a)
{    
    int temp = a;
    int sum =0;

    // Get the number of digits Adding 1 to compensate for the loss of fraction part of the value returned by log10 due to the conversion into integer

    int k = log10(temp) + 1;
    // Calculate the sum of the digits raised to the power of num_digits

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit , k);
        temp /= 10;
    }
    return (sum == a);
}

// Proccess 2
// Recursive function to calculate the sum of digits raised to the power of num_digits
bool isArmstrong(int N)
{
    //Finding number of digit
    int k = log10(N) + 1;
    //Calculating the sum
    int sum = armstrongSum(N , k);
    return (sum == N);
}
int armstrongSum(int N, int K)
{
    if (N == 0)
    {
        return 0;
    }
    int digit = N % 10;
    return pow(digit , K) + armstrongSum(N / 10 , K);
    
}

// Proccess 3
int isArms(int N) 
{
    // Convert the number to a string
    char str[20];
    sprintf(str , "%d" , N);
    // Get the number of digits in the string
    int k = strlen(str);
    int sum =0;
    // Calculate the sum of the digits raised to the power of num_digits
    for (int i = 0; i < k; i++)
    {
        int digit = str[i] - '0';
        sum += pow(digit , k);
    }
    // Return whether the sum equals the original number
    return (sum == N);
}

//Choice 4
int armsLimit(int x , int y)
{
    int num , sum , count =0;
    // This loop will run for starting value to ending value
    for (int i = x; i <= y; i++)
    {
        num = i;
        // Count number of digits.
        while (num != 0)
        {
            num /= 10;
            count++;
        }
        num = i;
        sum = pow(num % 10 , count) + pow((num % 100 - num % 10)/10, count) + pow((num % 1000 - num % 100)/100 , count);

        //check for armstrong number
        if (sum == i)
        {
            int result = i;
            return i;
        }
        count = 0;
    }
}