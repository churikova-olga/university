#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0, "Russian");
    float A, B;
    printf("Введите число А: ");
    scanf("%f", &A);
    B=A*A;
    A=B;
    A=B*A;
    B=A;
    B=A*B;
    printf("А = %.2f", B);
    return 0;
}
