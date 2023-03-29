#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // check for invalid input
    if(n < 1) {
        printf("Invalid input.");
        return 0;
    }

    // print the first two terms
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    // generate and print the next terms
    for(i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
