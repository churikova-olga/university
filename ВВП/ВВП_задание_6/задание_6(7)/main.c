#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0, "Russian");
    float A, B, C;
    printf("Введите число А: ");
    scanf("%f", &A);
    B=C=A;
    B=B*C;
    C=B;
    B=B*C;
    B=B*A;
    A=C=B;
    C=A*B;
    A=C*B;
    printf("А = %.2f", A);
    return 0;
}
