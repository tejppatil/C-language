//Write a c program where a positive integer is entered through the keyboard and print the binary equivalent of this number using recursion.
#include <stdio.h>
void decimalToBinary(int n) 
{
    if (n > 0) 
    {
        decimalToBinary(n/2);
        printf("%d", n % 2);
    }
}

int main() 
{
    int decimalNumber;
    printf("Enter a positive integer: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber < 0) 
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("Binary equivalent: ");
    if (decimalNumber == 0) 
    {
        printf("0");
    } 
    else 
    {
        decimalToBinary(decimalNumber);
    }
    return 0;
}
