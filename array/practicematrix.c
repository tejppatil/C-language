//Practice using multidimensional arrays for matrix operations
#include<stdio.h>
int main()
{
    int i,j,sum[100][100],sub[100][100];
    printf("Enter the maximum rows you want in matrix: ");
    scanf("%d",&i);
    printf("Enter the maximum columns you want in matrix: ");
    scanf("%d",&j);
    int a[i][j];
    for(int r=0;r<i;r++)
    {
        for(int s=0;s<j;j++)
        {
            printf("Enter the a[%d,%d] element: ",r,s);
            scanf("%d",&a[r][s]);
        }
    }
    return 0;
}