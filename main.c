#include <stdio.h>
#include <string.h>

char str[100];
void remover(char *str, int index){
    int i = 0;
    if ((str[i] == ' ' && str[i + 1] == ' ') || (str[i] == '(' && str[i + 1] == ' ')){
        remover(str, index + 1);
    }
    for (i=index; i< strlen(str) - 1; i ++){
        str[i] = str[i + 1];
    }
        str[i] = 0;
}

int main(){
    int i;
    scanf("%[^\n]s", str);
    for(i=0;i<strlen(str);i++){
        if((str[i] == ' ' && str[i + 1] == ' ') || (str[i] == '(' && str[i + 1] == ' ')){
            remover(str, i+1);
        }
    }
    printf("%s", str);
}