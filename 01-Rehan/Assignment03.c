/*
  Roll No.:     01
  Student Name: Rehan Hanif Mhate
  Program Title: WAP to calculate the power of a number.

  Task Given By:
    - Roll No. of Assignee: 36
    - Assignee Name: Qazim Ansari
*/
#include <stdio.h>

// Function to calculate power
double power(int base, int exponent) {
    double result = 1.0;

    // Handle negative exponent
    if (exponent < 0) {
        base = 1 / base;  // Inverse of base if exponent is negative
        exponent = -exponent;  // Make the exponent positive
    }

    // Loop to calculate base^exponent
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent;

    // Input base and exponent from the user
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Call the power function and display the result
    double result = power(base, exponent);
    printf("%d raised to the power %d is %.5lf\n", base, exponent, result);

    return 0;
}
/*Output:
Enter the base: 2
Enter the exponent: 4
2 raised to the power 4 is 16.00000
*/
