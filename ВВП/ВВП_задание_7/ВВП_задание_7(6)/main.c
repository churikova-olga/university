#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0,"Russian");
    float A1, B1, x, y, A2,B2, C1,C2;
    printf("A1*x+B1*y=C1\nA2*x+B2*y=C2\n");
    printf("Введите A1: ");
    scanf("%f", &A1);
    printf("Введите B1: ");
    scanf("%f", &B1);
    printf("Введите C1: ");
    scanf("%f", &C1);
    printf("Введите A2: ");
    scanf("%f", &A2);
    printf("Введите B2: ");
    scanf("%f", &B2);
    printf("Введите C2: ");
    scanf("%f", &C2);
    x=(C1*B2-C2*B1)/(A1*B2-A2*B1);
    y=(A1*C2-A2*C1)/(A1*B2-A2*B1);
    printf("x=%f\ny=%f", x, y);
}
