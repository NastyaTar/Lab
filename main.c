#include <stdio.h>

int main() {
    int dig;
    int text[20];
    printf("Введите любое число: ");
    scanf("%d", &dig);
    printf("Вы ввели число: ");
    printf("%d", dig);
    printf("\nВведите слово до 20 букв: ");
    scanf("%s", text);
    printf("Вы ввели слово: ");
printf("%s", text);

return 0;
}
