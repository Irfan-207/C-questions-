// C Program for Quadratic Equation Roots
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void findRoots(int a , int b , int c)
{
    if (a == 0) 
    { 
        printf("Invalid"); 
        return; 
    }
    int d = (b*b) - (4*a*c);

    if (d > 0)
    {
        printf("The Roots are real and different\n");
        double sqr = sqrt(d);
        printf("Root 1 : %.2lf\n", ((-b + sqr)/2*a));
        printf("Root 2 : %.2lf\n", ((-b - sqr)/2*a));
    }
    else if (d == 0)
    {
        printf("The Roots are real and the same\n");
        printf("Root 1 : %.2lf\n", ((-b)/ (2*a)));
        printf("Root 2 : %.2lf\n", ((-b)/ (2*a)));
    }
    else
    {
        printf("The Roots are complex \n");
        double sqr = sqrt(d);
        printf("%.2lf + i%.2lf\n%.2lf - i%.2lf", -(double)b / (2 * a) , sqr / (2 * a) , -(double)b / (2 * a) , sqr / (2 * a));
    }
}

int main()
{
    int a , b, c;
    printf("Enter the coefficients of X^2 : ");
    scanf("%d", &a);
    printf("Enter the coefficients of X : ");
    scanf("%d", &b);
    printf("Enter the value of the constant (C) : ");
    scanf("%d", &c);

    printf("Your entered equation is : %dx^2 %dx + %d.", a , b, c);

    findRoots(a , b, c);
    return 0;
}