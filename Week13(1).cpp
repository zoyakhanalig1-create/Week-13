#include<stdio.h>
#include<string.h>

swap(int a, int b) {
        int temp;
        temp = a;
        a = b;
        b = temp;
        printf("\nValues of \'a\' and \'b\' after swapping:\n");
        printf("a = %d and b = %d", a, b);
}

swapRef(int *x, int *y) {
        *x = *x + *y;
        *y = *x - *y;
        *x = *x - *y;
}

main() {
        char choice[10];
        printf("Do you want to swap using a third variable or without a third variable?\n");
        scanf("%s", choice);
        if (strcmp(choice, "with") == 0 || strcmp(choice, "With") == 0) {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("\nValues of \'a\' and \'b\' before swapping:\n");
                printf("a = %d and b = %d", a, b);
                swap(a, b);
        }
        else if (strcmp(choice, "without") == 0 || strcmp(choice, "Without")  == 0) {
                int x, y;
                printf("Enter two numbers: ");
                scanf("%d %d", &x, &y);
                printf("\nValues of \'a\' and \'b\' before swapping:\n");
                printf("a = %d and b = %d", x, y);
                swapRef(&x, &y);
                printf("\nValues of \'a\' and \'b\' after swapping:\n");
                printf("a = %d and b = %d", x, y);
        }
        else {
                printf("Ivalid Input.");
        }
}
