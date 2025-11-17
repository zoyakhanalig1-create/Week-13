#include <stdio.h>

main() {
    int i, size, *ptr;       

    printf("Enter the expected size of elements: ");
    scanf("%d", &size);
    int ar[size];

        printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &ar[i]);
    }

    ptr = ar;

    printf("The elements of the array are:\n");
    printf("{");
    for (i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("}");
}
