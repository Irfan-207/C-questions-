//Write a Program to calculate Compound Interest.

#include<stdio.h>
#include<math.h>

int main()
{
    
    double principal , time , rate , A , CI;

    printf("Enter the principal(amount): ");
    scanf("%lf", &principal);
    printf("\n");
    printf("Enter the times: ");
    scanf("%lf", &time);
    printf("\n");
    printf("Enter the interest rate: ");
    scanf("%lf", &rate);
    printf("\n");

    A = principal*((pow((1 + rate / 100),time)));
    CI = A - principal;
    
    printf("The compound interest: %.2lf", CI);
}