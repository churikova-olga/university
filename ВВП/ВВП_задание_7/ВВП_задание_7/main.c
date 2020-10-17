#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    float p=3.14,r, c;
    printf("Значение угла в градусах: ");
    scanf("%f", &c);
    if (c>0 && c<360){
        r=(c*p)/180;
        printf("Значение угла в радианах: %f", r);
    }
    else
        printf("Введено неверное значение");
    return 0;
}
