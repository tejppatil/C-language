#include <stdio.h>

// Function to check if a number is prime or not
void checkPrime() {
    int n, isPrime = 1;

    // Input: Enter the number
    printf("Enter the number: ");
    scanf("%d", &n);

    // Check if the number is prime
    if (n <= 1) {
        printf("Number is not suitable to say whether it's prime or not.\n");
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; // Set flag to false if it's divisible by any number
                break;       // Exit the loop since we already know it's not prime
            }
        }

        // Output: Print whether the number is prime or not
        if (isPrime) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is not a prime number.\n", n);
        }
    }
}

int main() {
    // Call the function to check if the entered number is prime or not
    checkPrime();

    return 0;
}