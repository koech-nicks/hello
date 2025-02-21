#include <stdio.h> // Include standard input-output header file

// Function to calculate factorial
// It takes an integer n as input and returns an unsigned long long value
unsigned long long factorial(int n) {
    // Base case: if n is 0, return 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: n * factorial of (n-1)
        return n * factorial(n - 1);
    }
}

int main() {
    int number; // Variable to store the user's input number

    // Print a message to prompt the user to enter a number
    printf("Enter a number: ");
    // Read the input number from the user and store it in the variable 'number'
    scanf("%d", &number);

    // Check if the entered number is negative
    if (number < 0) {
        // Print a message to inform the user that factorial is not defined for negative numbers
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial of the entered number by calling the factorial function
        // Print the result
        printf("The factorial of %d is %llu\n", number, factorial(number));
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}
