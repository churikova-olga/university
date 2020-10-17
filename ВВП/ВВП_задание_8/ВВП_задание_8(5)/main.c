#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int b,a,c;
    printf("Введите трехзначное число: ");
    scanf("%d", &a);
    if(a>99 && a<1000){
        b=a/100;
        c=a%100;
        c=c*10;
        a=c+b;
        printf("Полученное число: %d", a);
    }
    else
        printf("Ошибка");
    return 0;
}
