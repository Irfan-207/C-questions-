//Write a program to store information on students using structure.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[50];
    int roll , age;
    double total_mark;
};
int main()
{
    int n;
    printf("How many students data you want to store: ");
    scanf("%d" , &n);
    //Create a array structure for storing the information of each student
    struct student students[n];

    //For better visualization
    printf("========================================\n");
    printf("           Student Records              \n");
    printf("========================================\n");

    //Get the info from the user
    for (int i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter age: ");
        scanf("%d" ,&students[i].age);
        printf("Enter Roll: ");
        scanf("%d" ,&students[i].roll);
        printf("Enter total mark:");
        scanf("%lf",&students[i].total_mark);
    }

    //Print the info
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("  Name        : %s\n", students[i].name);
        printf("  Roll Number : %d\n", students[i].roll);
        printf("  Age         : %d\n", students[i].age);
        printf("  Total Marks : %.2lf\n", students[i].total_mark);
    }
    printf("========================================\n");
}