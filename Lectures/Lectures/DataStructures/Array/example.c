#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array elements:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nAccessing element at index 2: %d\n", numbers[2]);

    return 0;
}
