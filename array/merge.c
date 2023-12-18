//Implement a program to merge two sorted arrays into a single sorted array.
#include <stdio.h>

void mergeSortedArrays(int a[], int n1, int b[], int n2, int result[]) 
{
    int i = 0, j = 0, k = 0;

    // Compare elements from both arrays and merge into the result array
    while (i < n1 && j < n2) 
    {
        if (a[i] <= b[j]) 
        {
            result[k] = a[i];
            i++;
        } else 
        {
            result[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of arr1, if any
    while (i < n1) 
    {
        result[k] = a[i];
        i++;
        k++;
    }

    // Copy the remaining elements of arr2, if any
    while (j < n2) 
    {
        result[k] = b[j];
        j++;
        k++;
    }
}

int main() 
{
    int n1,n2;

    // Input size of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    int a[n1];

    // Input elements of the first array (assuming it is sorted)
    printf("Enter the elements of the first array in sorted order:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    int b[n2];

    // Input elements of the second array (assuming it is sorted)
    printf("Enter the elements of the second array in sorted order:\n");
    for (int i = 0; i < n2; i++) 
    {
        scanf("%d", &b[i]);
    }

    // Create a result array to store the merged sorted array
    int result[n1 + n2];

    // Merge the two sorted arrays
    mergeSortedArrays(a, n1, b, n2, result);

    // Display the merged sorted array
    printf("Merged Sorted Array:\n");
    for (int i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", result[i]);
    }

    return 0;
}