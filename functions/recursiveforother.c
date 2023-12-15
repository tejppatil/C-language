//Implement recursive functions for Fibonacci series, factorial, and any other suitable problem.
#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    printf("Press /n1 for Fibonacci\n2 for factorial/n3 for maximum/n4 for power calculation/n= ");
    scanf("%d",&n);
    switch(n)
    {case 1:  
        int n,x,y;
        printf("For Fibonacci Series: ");
        printf("Enter the value: ");
        scanf("%d",&n);
        fibo(x,y);
        printf("The fibonacci series is %d")
    }
}