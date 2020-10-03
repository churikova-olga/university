#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(0,"Russian");
    //Найти значение функции y = 4(x−3)^6 − 7(x−3)^3 + 2  при данном значении x
    float x, y;
    printf("y = 4(x−3)^6 − 7(x−3)^3 + 2\n");
    printf("Введите х: ");
    scanf("%f", &x);
    y = (4 * pow((x-3),6)) - (7 * pow((x-3),3)) + 2;
    printf("y = %.2f", y);
}
