#include <stdio.h>

/**
 * 
 * 
 */

int print_sign(int n) {
    if (n > 0) {
        printf("+");
        return 1;
    } else if (n == 0) {
        printf("0");
        return 0;
    } else {
        printf("-");
        return -1;
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = print_sign(number);

    printf("\nSign of %d is %d\n", number, result);

    return 0;
}
