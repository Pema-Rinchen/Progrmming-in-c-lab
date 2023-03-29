#include <stdio.h>

int main() {
    int num, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is prime
    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }

    if(num == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if(flag == 0) {
            printf("%d is a prime number.", num);
        }
        else {
            printf("%d is a composite number.", num);
        }
    }

    return 0;
}
