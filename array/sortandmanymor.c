//Write programs to manipulate arrays (sorting, searching, insertion, deletion).
#include<stdio.h>
int main()
{
    int n,i,s,j,r;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d elements value of array: ",i);
        scanf("%d",&a[i]);
    }
    printf("Your given array is:-");
    printf("[");
    for(s=0;s<i-1;s++)
    {
        printf("%d, ",a[s]);
    }
    printf("%d",a[s]);
    printf("]");

}