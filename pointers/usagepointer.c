//Write programs to demonstrate the usage of pointers (pointer arithmetic, passing pointers to functions).
#include <stdio.h>
int swap(int *x, int *y) 
{
    int t = *x;
    *x = *y;
    *y = t;
    printf("Inside swap function: x=%d, y=%d\n", *x, *y);
}
int main() 
{
    printf("For Pointer Arithmetic..\n");
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers;

    printf("Original array: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Array elements using pointers: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    printf("For Pointer Passing to array...\n");
    int a = 10, b = 20;
    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);
    return 0;
}
