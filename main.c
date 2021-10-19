#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int massiv[4] = {1000, 1001, 1002, 1003};
    printf("Задание 1\n");
    array = massiv;
    printf("%d | %d | %d | %d\n", *array, *(array + 1), *(array + 2), *(array + 3));

    int *arr;
    int size = 4, i;
    printf("\nЗадание 2\n");
    arr = (int*)malloc(size * sizeof(int));
    for(i=0; i < 4 + size; i++){
        arr[i] = i + 1000;
    }
    printf("%d | %d | %d | %d", arr[0], arr[1], arr[2], arr[3]);
    free(arr);

    return 0;
}
