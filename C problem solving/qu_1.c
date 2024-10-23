// write a program where user will enter a number and program will find out if the number is prime or not
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num , isprime =1;
    printf("Enter your number : ");
    scanf("%d" , &num);

    if (num == 0 || num == 1)
    {
        isprime = 0;
    }
    else
    {
        //check disability from n to n/2
        for (int i = 2; i <= num/2; ++i)
        {
            if (num % i == 0)
            {
                isprime = 0;
            }
        }
    }
    
    //output the result
    if (isprime)
    {
        printf("%d is a prime number !!!\n" , num);
    }
    else
    {
        printf("%d is not a prime number !!!" , num);
    }
    return 0;
}