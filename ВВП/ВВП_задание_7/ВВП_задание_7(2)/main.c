#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    float p=3.14,r,c;
    printf("Значение угла в радианах: ");
    scanf("%f", &c);
    if (c>0 && c<2*p){
        r=(180*c)/p;
        printf("Значение угла в градусах: %f", r);
    }
    else
        printf("Введено неверное значение");
    return 0;
}
