#include <stdio.h>
#include <math.h>

static char *NameLamp[] = {
        "лампа накаливание",
        "лампа дневного света",
        "галогенная лампа",
        "светодиодная лампа",
        "инфрокрасная лмпа",
        "кварцевая лампа"
};

enum Lamps {
    FILAMENT,
    DAYLAMP,
    HOLOGEN,
    LEDLAMP,
    REDLAMP,
    QUARTZLAMP
};

struct MP3 {
    char state[2];
};

int main() {
    int S, b, a;
    double lv[2];
    double pv[2];
    double pn[2];
    double ln[2];
    char all[10];
    printf("%s\n", "Задание 1");
    printf("%s\n", NameLamp[HOLOGEN]);

    printf("\n%s\n", "Задание 2");
    printf("Введите площадь прямоугольника: ");
    scanf("%d", &S);
    printf("       и длину одной из сторон: ");
    scanf("%d", &b);
    a = S / b;
    lv[0] = 0 - fmax(a, b)/2;
    lv[1] = 0 + fmin(a, b)/2;
    pv[0] = 0 + fmax(a, b)/2;
    pv[1] = 0 + fmin(a, b)/2;
    pn[0] = 0 + fmax(a, b)/2;
    pn[1] = 0 - fmin(a, b)/2;
    ln[0] = 0 - fmax(a, b)/2;
    ln[1] = 0 - fmin(a, b)/2;
    printf("При условии, что середина прямоугольника находится в точке (0,0), то координаты: \n "
           "левого верхнего угла: (%f, %f)\n правого верхнего: (%f, %f)\n правого нижнего: (%f, %f)\n левого нижнего: (%f, %f)\n",
           lv[0], lv[1], pv[0], pv[1], pn[0], pn[1], ln[0], ln[1]);

    printf("\n%s\n", "Задание 3");//7
    struct MP3 mp_3;
    int i;
    scanf("%s", mp_3.state);
    printf("Состояние МР3-проигрывателя диктофона:\n");
    if (mp_3.state[2] == '1'){
        i = 001;
        printf("Воспроизведение выкл.\nПауза выкл.\nЗапис вкл.");}
    else{
        if (mp_3.state[2] == '2'){
            i = 010;
            printf("Воспроизведение выкл.\nПауза вкл.\nЗапис выкл.");}
        else {
            if (mp_3.state[2] == '3'){
                i = 011;
                printf("Воспроизведение выкл.\nПауза вкл.\nЗапис вкл.");}
            else{
                if (mp_3.state[2] == '4'){
                    i = 100;
                    printf("Воспроизведение вкл.\nПауза выкл.\nЗапис выкл.");}
                else{
                    if (mp_3.state[2] == '5'){
                        i = 101;
                        printf("Воспроизведение вкл.\nПауза выкл.\nЗапис вкл.");}
                    else{
                        if (mp_3.state[2] == '6'){
                            i = 110;
                            printf("Воспроизведение вкл.\nПауза вкл.\nЗапис выкл.");}
                        else{
                            if (mp_3.state[2] == '7'){
                                i = 111;
                                printf("Воспроизведение вкл.\nПауза вкл.\nЗапис вкл.");}
                            }
                        }
                    }
                }
            }
        }


    return 0;
}


