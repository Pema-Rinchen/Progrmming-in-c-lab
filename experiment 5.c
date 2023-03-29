#include <stdio.h>

int main() {
    int num, reverse[10], i = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        reverse[i] = num % 10;
        num /= 10;
        i++;
    }
    printf("The reversed integer is: ");
    for (int j = 0; j < i; j++) {
        printf("%d", reverse[j]);
    }
    printf("\n");
    return 0;
}
