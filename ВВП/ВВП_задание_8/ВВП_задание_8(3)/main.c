#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int b,a;
    printf("Даны целые положительные числа a и b (a>b)\n");
    printf("Введите a: ");
    scanf("%d", &a);
    printf("Введите b: ");
    scanf("%d", &b);
    if((a>b) && (a>0 && b>0)){
        printf("Длина незанятой части: %d", a%b);
    }
    else
        printf("Ошибка");
    return 0;
}
