#include <stdio.h>
#include <string.h>

int main() {
    char first[100];
    char second[100];
    printf("Задание 1:\n");
    printf("Введите первую строку: ");
    scanf("%s", first);
    printf("Введите вторую строку: ");
    scanf("%s", second);
    printf("Склееная строка: %s", strcat(first, second));


    int i, n;
    printf("\nЗадание 4:\n");
    printf("Введите первую строку: ");
    scanf("%s", first);
    printf("Введите вторую строку: ");
    scanf("%s", second);
    printf("Введите количество символов которые вы хотите сравнить: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        if (first[i] == second[i]){
            printf("%d-ые символы одинаковые", i + 1);}
        else{
            printf("\n%d-ые символы разные", i + 1);}
    }

    char first_cpy[100];
    printf("\nЗадание 5:\n");
    printf("Скопируем строку first в новую переменную first_cpy: %s", strcpy(first_cpy, first));

    char search[10];
    printf("\nЗадание 8:\n");
    printf("Введите символ, который хотите найти в строке first_cpy: ");
    scanf("%s", search);
    printf("Символ %s находится на %d позиции", search, strstr(first_cpy, search) - first_cpy + 1);

    char segment[100];
    char str[100];
    printf("\nЗадание 11:\n");
    printf("Введите строку: ");
    scanf("%s", str);
    printf("Введите строку, длину которой вы хотите найти в другой строке: ");
    scanf("%s", segment);
    printf("Длина сегмента вхождения: %d", strpbrk(str, segment) - str);
    return 0;
}
