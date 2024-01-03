#include<stdio.h>

int main() {
    int n = 0;
    int isPrime = 1;  // Assume the number is prime initially

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Number is not suitable to say whether it's prime or not.\n");
    } else {
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                isPrime = 0;  // Set flag to false if it's divisible by any number
                break;  // Exit the loop since we already know it's not prime
            }
        }

        if (isPrime) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is not a prime number.\n", n);
        }
    }

    return 0;
}
