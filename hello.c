#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add();
int main(void)
{
    int x = 5;
    printf("Hello, world!\n");
    printf("C is sooo fun\n");
    printf("x is = %d\n", x);
    printf("Hi. This is modified code for the repository!\n");
    printf("This is a random line of text!\n");
    
    int *array = malloc(sizeof(int) * 20);
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    /* seed RNG and fill array with random ints from 100 to 200 inclusive */
    srand((unsigned)time(NULL));
    for (int i = 0; i < 20; i++) {
        array[i] = rand() % 101 + 100; /* rand()%range + min; range = 200-100 =100, +1 =>101 */
    }

    printf("First 20 integers allocated with malloc:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d\n ", array[i]);
    }
    
    printf("%d\n", add(5,10));
    free(array);
    return 0;
}
int add(int a, int b){
return a+b;
}
