#include <stdio.h>

int main() {
    char *numbers[10] = {"ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    int num;
    printf("Задание 1 \n Введите цифру: ");
    scanf("%d", &num);
    printf("Это цифра ");
    printf("%s\n", numbers[num]);
//    n = 0;
//    while (num != 0){
//        k = num % 10;
//        result[n] = numbers[k];
//        num /= 10;
//        n += 1;
//    }
//    for (i = n - 1;i > -1;i--){
//        printf("%s ", result[i]);
//    }
    printf("Задание 2\n");
    int i;
    int months, percents, depos;
    printf("Введите количество месяцев: ");
    scanf("%d", &months);
    printf("Введите Процентную ставку: ");
    scanf("%d", &percents);
    printf("Введите депозит: ");
    scanf("%d", &depos);

    for(i=1; i < months + 1; i++){
        depos = depos + depos * percents / 100;
        printf("После %d месяца(-ев) будет %d у.е.\n", i, depos);
    }
    return 0;
}
