#include<stdio.h>
int veer(int n)
{
    int i;
    if(i=n-1 ; i>=1;i--)
    {
        n=n*i;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",veer(n));
    return 0;
}
