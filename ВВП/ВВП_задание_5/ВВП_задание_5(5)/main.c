#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()//. Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь
{
    setlocale(0, "Russian");
    float x1,x2,x3,y1,y2,y3,P,S,a,b,c,p;
    printf("Введите координаты первой вершины в формате (x,y): ");
    scanf("%f%f", &x1, &y1);
    printf("Введите координаты второй вершины в формате (x,y): ");
    scanf("%f%f", &x2, &y2);
    printf("Введите координаты третьей вершины в формате (x,y): ");
    scanf("%f%f", &x3, &y3);
    a = (sqrtf(pow(x2-x1,2) + pow(y2-y1,2)));//формула длины отрезка
    b = (sqrtf(pow(x3-x2,2) + pow(y3-y2,2)));
    c = (sqrtf(pow(x3-x1,2) + pow(y3-y1,2)));
    p = (a+b+c)/2;//ищем полупериметр
    P = a+b+c;
    S = sqrtf(p*(p-a)*(p-b)*(p-c));
    printf("Площадь: %.2f\nПериметр: %.2f",S,P);
    return 0;
}
