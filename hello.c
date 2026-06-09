#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 5;
    printf("Hello, world!\n");
    printf("C is sooo fun");
    printf("x is = %d\n", x);

    int *array = malloc(sizeof(int) * 20);
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 20; i++) {
        array[i] = i + 1;
    }

    printf("First 20 integers allocated with malloc:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}
