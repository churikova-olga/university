#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int a,b,c;
    printf("Проверить истинность существует треугольник со сторонаи a,b,c");
    printf("Введите a: ");
    scanf("%d", &a);
    printf("Введите b: ");
    scanf("%d", &b);
    printf("Введите c: ");
    scanf("%d", &c);
    if((a<b+c) && (b<a+c) && (c<a+b))
        printf("Истина");
    else
        printf("Ложь");
    return 0;
}
