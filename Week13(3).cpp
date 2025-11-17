#include <stdio.h>

fibonacci(int num) {
    if (num == 0) {
        return 0;  
    }
        else if (num == 1) {
        return 1;       
    }
    else {
        return fibonacci(num - 1) + fibonacci(num - 2);  
    }
}

main() {
    int num, i;

    printf("Enter the expected number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series up to %d terms:\n", num);
    for (i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
}
