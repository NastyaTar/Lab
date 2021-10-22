#include <stdio.h>

int *result[15];
int n = 0;
void in_array(int num){
    int k;
    while (num != 0) {
        k = num % 10;
        result[n] = k;
        num /= 10;
        n++;
    }
}

int main() {
    int num;
    int i;

    printf("Введите число(!): ");
    scanf("%d", &num);
    in_array(num);
    for(i=n-1; i > -1; i--){
        printf("%d ", result[i]);
    }

    return 0;
}
