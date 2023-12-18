//Implement programs to find the sum, average, maximum, and minimum values in an array.
#include <stdio.h>
#include <limits.h>

int main() {
    int maxn = 10;
    int array[maxn];
    int n = 0;

    // Read the size of the array from the user
    printf("Enter the size of the array (max %d): ", maxn);
    scanf("%d", &n);

    // Read array elements from the user
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    // Calculate and display sum, average, maximum, and minimum
    int sum = 0; 
    for (int i = 0; i < n; i++) 
    {
        sum += array[i];
    }
    printf("Sum: %d\n",sum);
    int add = 0; 
    for (int i = 0; i < n; i++) 
    {
        add += array[i];
    }
    printf("Average: %.2f\n",(double)add / n);

    int max = INT_MIN; 
    for (int i = 0; i < n; i++) 
    {
        if (array[i] > max) 
        max = array[i];
    }
    printf("Maximum: %d\n",max);
    int min = INT_MAX; 
    for (int i = 0; i < n; i++) 
    {
         if (array[i] < min) 
         min = array[i]; 
    }
     printf("Minimum: %d\n",min);

    return 0;
}
