#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(0, "Russian");
    char C;
    int N;
    printf("север - north, юг - south, east - восток, west - запад\n");
    printf("Введите один символ n,s,e,w: ");
    scanf("%c", &C);
    printf("0 - едет вперед, 1 - поворот налево,(-1) - поворот направо\n");
    printf("введите 0,1,-1: ");
    scanf("%d", &N);
    printf("Полученное направление ");
    switch(C)
    {
        case'e':
            if(N==0)
                printf("e");
            else{
                if(N==1)
                    printf("n");
                else{
                    if(N==-1)
                        printf("s");
                    else
                        printf("ошибка");}}
            break;
        case's':
            if(N==0)
                printf("s");
            else{
                if(N==1)
                    printf("e");
                else{
                    if(N==-1)
                        printf("w");
                    else
                        printf("ошибка");}}
            break;
        case'w':
            if(N==0)
                printf("w");
            else{
                if(N==1)
                    printf("s");
                else{
                    if(N==-1)
                        printf("n");
                    else
                        printf("ошибка");}}
            break;
        case'n':
            if(N==0)
                printf("n");
            else{
                if(N==1)
                    printf("w");
                else{
                    if(N==-1)
                        printf("e");
                    else
                        printf("ошибка");}}
            break;
        default:
            printf("Ошибка!");

    }
    return 0;
}
