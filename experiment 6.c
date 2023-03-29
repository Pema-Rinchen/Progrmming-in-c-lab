#include <stdio.h>

int main() {
    int n, arr[100], search, i, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d is found at index %d\n", search, i);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("%d is not found in the array\n", search);
    }
    return 0;
}
