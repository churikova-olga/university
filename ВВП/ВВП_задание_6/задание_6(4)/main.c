#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(0,"Russian");
    //Найти значение функции y = 3x^6 − 6x^2 − 7 при данном значении x
    float x, y;
    printf("y = 3*x^6 − 6*x^2 − 7\n");
    printf("Введите х: ");
    scanf("%f", &x);
    y = 3*pow(x,6) - 6*pow(x,2)- 7;
    printf("y = %.2f", y);
}
