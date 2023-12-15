//Write programs to manipulate arrays (sorting, searching, insertion, deletion).
#include<stdio.h>
int main()
{
    int n,a[n];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d in array",i);
        scanf("%d",&a[i]);
    }
    return 0;
}