#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()//Найти длины отрезков AC и BC, и их сумму
{
    setlocale(0, "Russian");
    float A,B,C,AC,BC,sum;
    printf("Введите значения точки A, B, C: ");
    scanf("%f%f%f",&A,&B,&C);
    AC=fabsf(C-A);//чтобы найти длину отрезка надо из большей координаты вычесть меньшую, в данном случае использован модуль для переменных типа float
    BC=fabsf(C-B);
    sum=AC+BC;// находим сумму отрезков
    printf("Длина AC: %.2f\nДлина BC: %.2f\nСумма AB и BC: %.2f\n",AC,BC,sum);
    return 0;
}
