#include <stdio.h>

even(int *ar, int size) {
    int count = 0, i;
    for (i = 0; i < size; i++) {
        if (*(ar + i) % 2 == 0)
            count++;
    }
    return count;
}

main() {
    int size, i, count;

    printf("Enter the expected size of the array: ");
    scanf("%d", &size);
    int ar[size];

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &ar[i]);
    }

    printf("The number of even elements in the array is: %d.", even(ar, size));
}
