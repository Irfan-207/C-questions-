// C program to reverse a string
#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
   int n = strlen(str);
   for (int i = 0; i < n/2; i++)
   {
    char temp = str[i];
    str[i] = str[n-i-1];
    str[n-i-1] = temp;    
   }
   
}
int main()
{
    char str[100];
    printf("Enter your text: ");
    fgets(str,sizeof(str),stdin);

    reverse(str);
    printf("Reverse string is: %s", str);
    return 0;
}