//Write a Program to Calculate the Sum of Natural Numbers using recursion.

#include<stdio.h>
int main()
{
    int num , sum =0 , i=1;
    printf("Enter the number you calculate up to : ");
    scanf("%d" , &num);
    while( i <= num)
    {
        sum += i;
        i++;
    }
    printf("Sum = %d" , sum);
    return 0;
}