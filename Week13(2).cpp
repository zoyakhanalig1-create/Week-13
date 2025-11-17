#include <stdio.h>

factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
        }
    else {
        return num * factorial(num - 1);
    }
}

main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.");
    }
    else {
        printf("%d! = %d.", num, factorial(num));
    }
}
