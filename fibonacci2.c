

#include <stdio.h>

// Function to calculate Fibonacci using iteration
// It takes an integer n as input and prints the Fibonacci sequence up to that number
void fibonacciSequence(int n) {
    int t1 = 0, t2 = 1, nextTerm; // Initialize the first two terms of the sequence
     int i;
    // Print the first two terms
    printf("%d, %d", t1, t2);

    // Loop to calculate the remaining terms
    for ( i = 3; i <= n; ++i) {
        nextTerm = t1 + t2; // Calculate the next term
        printf(", %d", nextTerm); // Print the next term

        // Update the previous two terms
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n"); // Print a newline at the end of the sequence
}

int main() {
    int number; // Variable to store the user's input number

    // Print a message to prompt the user to enter a number
    printf("Enter the number of terms: ");
    // Read the input number from the user and store it in the variable 'number'
    scanf("%d", &number);

    // Check if the entered number is less than or equal to zero
    if (number <= 0) {
        // Print a message to inform the user that the number must be positive
        printf("Please enter a positive number.\n");
    } else {
        // Print the Fibonacci sequence by calling the fibonacciSequence function
        fibonacciSequence(number);
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}
