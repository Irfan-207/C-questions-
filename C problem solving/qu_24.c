// Write a program to calculate simple interest 
#include<stdio.h>
int main()
{
    int Pamount , time ,rate;

    printf("Enter the principal amount : ");
    scanf("%d" , &Pamount);
    printf("Enter the annual interest rate : ");
    scanf("%d" , &rate);
    printf("Enter the time (years) : ");
    scanf("%d" , &time);

    printf("Principal amount : %d\n" , Pamount);
    printf("Annual interest rate : %d%c\n" , rate ,'%');
    printf("Time : %d years\n" , time);
     
    double si = (Pamount * rate * time) / 100;
    printf("The simple interest : %.2lf" , si);
    return 0;
}