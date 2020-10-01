#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()//Найти произведение длин отрезков AC и BC
{
    setlocale(0, "Russian");
    float A,B,C,AC,BC,comp;
    printf("Даны точки A,B,C, точка С расположена между А и B\n");
    printf("Введите значения точки A, C, B ");
    scanf("%f%f%f",&A,&C,&B);
    while (C-A<=0 || B-C<=0){
        printf("Введите заново координаты! С расположена между A и B: ");
        scanf("%f%f%f",&A,&C,&B);
    }
    AC=fabsf(C-A);//чтобы найти длину отрезка надо из большей координаты вычесть меньшую, в данном случае использован модуль для переменных типа float
    BC=fabsf(C-B);
    comp=AC*BC;//произведение отрезков
    printf("Длина AC: %.2f\nДлина BC: %.2f\nПроизведение AB и BC: %.2f\n",AC,BC,comp);
    return 0;
}
