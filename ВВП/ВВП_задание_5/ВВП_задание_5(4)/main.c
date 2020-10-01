#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()//Найти периметр и площадь прямоугольника
{
    setlocale(0, "Russian");
    float x1,x2,y1,y2,P,S;
    printf("Введите координаты точки в формате (x,y): ");
    scanf("%f%f", &x1, &y1);
    printf("Введите координаты второй точки в формате (x,y): ");
    scanf("%f%f",&x2, &y2);
    P = 2*(fabsf(x2-x1) + fabsf(y2-y1)); //находим периметр
    S = fabsf(x2-x1) * fabsf(y2-y1);// находим площадь
    printf("Площадь: %.2f\nПериметр: %.2f\n", S,P);
    return 0;
}
