#include <stdio.h>

int main() {
    char ff[100];
    char fs[100];
    FILE* fin_f;
    FILE* fin_s;
    FILE* fout;

    fin_f = fopen("first.txt", "r");
    fin_s = fopen("second.txt", "r");
    fout = fopen("new.txt", "w");

    if (fin_f != NULL) {
        fscanf(fin_f, "%s", ff);
    }
    fclose(fin_f);

    if (fin_s != NULL) {
        fscanf(fin_s, "%s", fs);
    }
    fclose(fin_s);

    fprintf(fout, "%s %s\n", ff, fs);
    fclose(fout);

    return 0;
}