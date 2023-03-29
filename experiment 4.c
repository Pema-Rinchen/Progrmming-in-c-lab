#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // check for invalid input
    if(n < 0) {
        printf("Error: Factorial of negative numbers is not defined.");
        return 0;
    }

    // compute the factorial
    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    // print the factorial
    printf("Factorial of %d = %llu", n, fact);

    return 0;
}
