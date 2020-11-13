#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    int a, b, c, n;
    printf("Проверить истинность треугольник со сторонами a,b,c является прямоугольным\n");
    printf("Введите a: ");
    scanf("%d", &a);
    printf("Введите b: ");
    scanf("%d", &b);
    printf("Введите c: ");
    scanf("%d", &c);
    n=pow(a,2)+pow(b,2);
    if (c*c==n)
        printf("Треугольник прямоугольный - истина");
    else
        printf("Ложь");
    return 0;
}
