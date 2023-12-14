//Implement a program to find the factorial of a number using iterative approaches.
#include<stdio.h>
int main()
{
    int n,fact;
    printf("Enter the Factorial No.: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        int fact=fact*n;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}