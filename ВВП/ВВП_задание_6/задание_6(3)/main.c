#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(0,"Russian");
    float A,B,C;
    printf("Введите А, B, C: ");
    scanf("%f%f%f", &A, &B, &C);
    C=C-A;
    A=C+A;
    C=A-C;
    B=A-B;
    A=A-B;
    B=B+A;
    printf("A = %.2f\nB = %.2f\nC = %.2f", A, B, C);
}
