#include<stdio.h>
int gcd(int a , int b)
{
    // Find the minimum of a and b
    int result = (a > b) ? a : b;
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0 )
        {
            break;
        }
        result --;    
    }
    return result;
}
int main()
{
    int a , b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    printf("GCD between %d and %d is : %d", a , b , gcd(a,b));
    return 0;
}