#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()//Найти расстояние между двумя точками с заданными координатами
{
    setlocale(0, "Russian");
    float x1,x2,y1,y2,distance;
    printf("Введите координаты первой точки в формате (x,y): ");
    scanf("%f%f", &x1, &y1);
    printf("Введите координаты второй точки в формате (x,y): ");
    scanf("%f%f",&x2, &y2);
    distance =(sqrtf(pow(x2-x1,2) + pow(y2-y1,2)));//формула длины отрезка
    printf("Растояние между двумя точками = %.2f\n",distance);
    return 0;
}
